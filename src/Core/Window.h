#pragma once

#include <Windows.h>
#include <string>

class Window
{
public:
	HRESULT Create(int width, int height, const wchar_t* title);
	void Show();
	HWND GetHandle() const;

private:
	static LRESULT CALLBACK StaticWindowProc(
		HWND hwnd,
		UINT message,
		WPARAM wParam,
		LPARAM lParam
	);

private:
	HINSTANCE m_hInstance = NULL;
	HWND m_hwnd = NULL;
	std::wstring m_windowClassName = L"MainWindowClass";
};
