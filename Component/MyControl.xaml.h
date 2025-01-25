#pragma once

#include "MyControl.g.h"

namespace winrt::Component::implementation
{
    struct MyControl : MyControlT<MyControl>
    {
        MyControl()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::Component::factory_implementation
{
    struct MyControl : MyControlT<MyControl, implementation::MyControl>
    {
    };
}
