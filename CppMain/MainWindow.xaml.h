#pragma once

#include "MainWindow.g.h"

namespace winrt::CppMain::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }
    };
}

namespace winrt::CppMain::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
