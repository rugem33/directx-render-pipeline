#include "Core/Window.h"

int main()
{
    Window window;

    if (FAILED(window.Create(1280, 720, L"DirectX Rendering Pipeline")))
        return -1;

    window.Show();

    MSG msg{};

    while (msg.message != WM_QUIT)
    {
        if (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        // 나중에 여기서 Renderer.Update();
        // 나중에 여기서 Renderer.Render();
    }

    return 0;
}