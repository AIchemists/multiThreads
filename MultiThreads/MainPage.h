#pragma once

#include "MainPage.g.h"

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
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

		double  NavViewCompactModeThresholdWidth ( );
        void ContentFrame_NavigationFailed (
            Windows::Foundation::IInspectable const& /* sender */,
            Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const& args );

        void    NavView_Loaded (
            Windows::Foundation::IInspectable const& /* sender */,
            Windows::UI::Xaml::RoutedEventArgs const& /* args */ );

        void NavView_ItemInvoked (
            Windows::Foundation::IInspectable const& /* sender */,
            muxc::NavigationViewItemInvokedEventArgs const& args );

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void NavView_Navigate (
            std::wstring navItemTag,
            Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& transitionInfo );
        void NavView_BackRequested (
            muxc::NavigationView const& /* sender */,
            muxc::NavigationViewBackRequestedEventArgs const& /* args */ );
        void BackInvoked (
            Windows::UI::Xaml::Input::KeyboardAccelerator const& /* sender */,
            Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs const& args );
        bool On_BackRequested ( );
        void On_Navigated (
            Windows::Foundation::IInspectable const& /* sender */,
            Windows::UI::Xaml::Navigation::NavigationEventArgs const& args );

    private:
        // Vector of std::pair holding the Navigation Tag and the relative Navigation Page.
        std::vector<std::pair<std::wstring, Windows::UI::Xaml::Interop::TypeName>>  m_pages;
    };
}

namespace winrt::MultiThreads::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
