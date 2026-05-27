#include "Window.h"

#include <Shellapi.h>

HRESULT Window::Create(int width, int height, const wchar_t* title)
{
	if (m_hInstance == NULL)
		m_hInstance = reinterpret_cast<HINSTANCE>(GetModuleHandle(NULL));

	HICON hIcon = NULL;

	WCHAR szExePath[MAX_PATH]{};
	GetModuleFileName(NULL, szExePath, MAX_PATH);

	if (hIcon == NULL)
		hIcon = ExtractIcon(m_hInstance, szExePath, 0);

	WNDCLASS wndClass{};
	wndClass.style = CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;
	wndClass.lpfnWndProc = Window::StaticWindowProc;
	wndClass.cbClsExtra = 0;
	wndClass.cbWndExtra = 0;
	wndClass.hInstance = m_hInstance;
	wndClass.hIcon = hIcon;
	wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndClass.hbrBackground = static_cast<HBRUSH>(GetStockObject(BLACK_BRUSH));
	wndClass.lpszMenuName = NULL;
	wndClass.lpszClassName = m_windowClassName.c_str();

	if (!RegisterClass(&wndClass))
	{
		DWORD dwError = GetLastError();

		if (dwError != ERROR_CLASS_ALREADY_EXISTS)
			return HRESULT_FROM_WIN32(dwError);
	}
	
	m_hwnd = CreateWindowEx(
		0,
		m_windowClassName.c_str(),
		title,
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		width,
		height,
		NULL,
		NULL,
		m_hInstance,
		NULL
	);

	if (m_hwnd == NULL)
		return HRESULT_FROM_WIN32(GetLastError());

	return S_OK;
}

void Window::Show(int nCmdShow)
{
	ShowWindow(m_hwnd, nCmdShow);
	UpdateWindow(m_hwnd);
}

HWND Window::GetHandle() const
{
	return m_hwnd;
}

LRESULT CALLBACK Window::StaticWindowProc(
	HWND hwnd,
	UINT message,
	WPARAM wParam,
	LPARAM lParam
)
{
	switch (message)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	default:
		return DefWindowProc(hwnd, message, wParam, lParam);
	}
}
