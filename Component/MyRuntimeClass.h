#pragma once

#include "MyRuntimeClass.g.h"

namespace winrt::Component::implementation
{
    struct MyRuntimeClass : MyRuntimeClassT<MyRuntimeClass>
    {
        MyRuntimeClass() = default;

        winrt::hstring MyProperty()
        {
            return L"MyProperty";
        }

        static winrt::hstring MyStaticProperty()
        {
            return L"MyStaticProperty";
        }
    };
}

namespace winrt::Component::factory_implementation
{
    struct MyRuntimeClass : MyRuntimeClassT<MyRuntimeClass, implementation::MyRuntimeClass>
    {
    };
}
