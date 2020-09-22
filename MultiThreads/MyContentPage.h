#pragma once

#include "MyContentPage.g.h"

namespace muxc
{
    using namespace winrt::Microsoft::UI::Xaml::Controls;
};

namespace wuxc
{
    using namespace winrt::Windows::UI::Xaml::Controls;
};


namespace winrt::MultiThreads::implementation
{
    struct MyContentPage : MyContentPageT<MyContentPage>
    {
        MyContentPage ();

        double  NavViewCompactModeThresholdWidth ( ) { return 100;}

        //void    NavView_Loaded (
        //    Windows::Foundation::IInspectable const& /* sender */,
        //    Windows::UI::Xaml::RoutedEventArgs const& /* args */ );

        //void NavView_ItemInvoked (
        //    Windows::Foundation::IInspectable const& /* sender */,
        //    muxc::NavigationViewItemInvokedEventArgs const& args );

        int32_t MyProperty();
        void MyProperty(int32_t value);

        //void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}
