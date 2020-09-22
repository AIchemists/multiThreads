#pragma once
#include "MyContentPage.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::MultiThreads::implementation
{
    struct MyContentPage : MyContentPageT<MyContentPage>
    {
        MyContentPage() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
        double NavViewCompactModeThresholdWidth();
    };
}
namespace winrt::MultiThreads::factory_implementation
{
    struct MyContentPage : MyContentPageT<MyContentPage, implementation::MyContentPage>
    {
    };
}
