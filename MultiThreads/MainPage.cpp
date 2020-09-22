#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "MyContentPage.h"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::MultiThreads::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    DWORD  WINAPI ThreadProc ( LPVOID /*lpParam*/ )
    {
        return  0;
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
//      myButton().Content(box_value(L"Clicked"));
        CreateThread ( NULL, 0, ThreadProc, NULL, 0, 0 );
    }

    double MainPage::NavViewCompactModeThresholdWidth ( )
    {
        return NavView ( ).CompactModeThresholdWidth ( );
    }

    void MainPage::ContentFrame_NavigationFailed (
        Windows::Foundation::IInspectable const& /* sender */,
        Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const& args )
    {
        throw winrt::hresult_error (
            E_FAIL, winrt::hstring ( L"Failed to load Page " ) + args.SourcePageType ( ).Name );
    }

    // List of ValueTuple holding the Navigation Tag and the relative Navigation Page
    std::vector<std::pair<std::wstring, Windows::UI::Xaml::Interop::TypeName>> m_pages;

    void MainPage::NavView_Loaded (
        Windows::Foundation::IInspectable const& /* sender */,
        Windows::UI::Xaml::RoutedEventArgs const& /* args */ )
    {
        // You can also add items in code.
/*        NavView ( ).MenuItems ( ).Append ( muxc::NavigationViewItemSeparator ( ) );
        muxc::NavigationViewItem navigationViewItem;
        navigationViewItem.Content ( winrt::box_value ( L"My content" ) );
        navigationViewItem.Icon ( wuxc::SymbolIcon ( static_cast<wuxc::Symbol>(0xF1AD) ) );
        navigationViewItem.Tag ( winrt::box_value ( L"content" ) );
        NavView ( ).MenuItems ( ).Append ( navigationViewItem );
        // jicheng
        //m_pages.push_back (
        //    std::make_pair<std::wstring, Windows::UI::Xaml::Interop::TypeName> (
        //        L"content", winrt::xaml_typename<MultiThreads::implementation::MyContentPage> ( ) ) );

        // Add handler for ContentFrame navigation.
        ContentFrame ( ).Navigated ( { this, &MainPage::On_Navigated } );

        // NavView doesn't load any page by default, so load home page.
        NavView ( ).SelectedItem ( NavView ( ).MenuItems ( ).GetAt ( 0 ) );
        // If navigation occurs on SelectionChanged, then this isn't needed.
        // Because we use ItemInvoked to navigate, we need to call Navigate
        // here to load the home page.
        NavView_Navigate ( L"home",
                           Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo ( ) );

        // Add keyboard accelerators for backwards navigation.
        Windows::UI::Xaml::Input::KeyboardAccelerator goBack;
        // jicheng
//        goBack.Key ( Windows::System::VirtualKey::GoBack );
//        goBack.Invoked ( { this, &MainPage::BackInvoked } );
        KeyboardAccelerators ( ).Append ( goBack );

        // ALT routes here
        Windows::UI::Xaml::Input::KeyboardAccelerator altLeft;
        // jicheng
//        goBack.Key ( Windows::System::VirtualKey::Left );
//        goBack.Modifiers ( Windows::System::VirtualKeyModifiers::Menu );
//        goBack.Invoked ( { this, &MainPage::BackInvoked } );
        KeyboardAccelerators ( ).Append ( altLeft );
*/    }

    void MainPage::NavView_Navigate (
        std::wstring navItemTag,
        Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& transitionInfo )
    {
        Windows::UI::Xaml::Interop::TypeName pageTypeName;
        if ( navItemTag == L"settings" )
        {
            // jicheng
//          pageTypeName = winrt::xaml_typename<MultiThreads::implementation::SettingsPage> ( );
        }
        else
        {
            for ( auto&& eachPage : m_pages )
            {
                if ( eachPage.first == navItemTag )
                {
                    pageTypeName = eachPage.second;
                    break;
                }
            }
        }
        // Get the page type before navigation so you can prevent duplicate
        // entries in the backstack.
        Windows::UI::Xaml::Interop::TypeName preNavPageType =
            ContentFrame ( ).CurrentSourcePageType ( );

        // Navigate only if the selected page isn't currently loaded.
        if ( pageTypeName.Name != L"" && preNavPageType.Name != pageTypeName.Name )
        {
            ContentFrame ( ).Navigate ( pageTypeName, nullptr, transitionInfo );
        }
    }

    void MainPage::NavView_ItemInvoked (
        Windows::Foundation::IInspectable const& /* sender */,
        muxc::NavigationViewItemInvokedEventArgs const& args )
    {
        if ( args.IsSettingsInvoked ( ) )
        {
            // Navigate to Settings.
        }
        else if ( args.InvokedItemContainer ( ) )
        {
            Windows::UI::Xaml::Interop::TypeName pageTypeName;
            pageTypeName.Name = unbox_value<hstring> ( args.InvokedItemContainer ( ).Tag ( ) );
            pageTypeName.Kind = Windows::UI::Xaml::Interop::TypeKind::Primitive;
 //         ContentFrame ( ).Navigate ( pageTypeName, nullptr );
        }
    }

    void MainPage::NavView_BackRequested (
        muxc::NavigationView const& /* sender */,
        muxc::NavigationViewBackRequestedEventArgs const& /* args */ )
    {
//        On_BackRequested ( );
    }
    void MainPage::BackInvoked (
        Windows::UI::Xaml::Input::KeyboardAccelerator const& /* sender */,
        Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs const& args )
    {
        On_BackRequested ( );
        // jicheng
 //       args.Handled ( true );
    }

    bool MainPage::On_BackRequested ( )
    {
        if ( !ContentFrame ( ).CanGoBack ( ) )
            return false;

        // Don't go back if the nav pane is overlaid.
        if ( NavView ( ).IsPaneOpen ( ) &&
             (NavView ( ).DisplayMode ( ) == muxc::NavigationViewDisplayMode::Compact ||
               NavView ( ).DisplayMode ( ) == muxc::NavigationViewDisplayMode::Minimal) )
            return false;

        ContentFrame ( ).GoBack ( );
        return true;
    }

    void MainPage::On_Navigated (
        Windows::Foundation::IInspectable const& /* sender */,
        Windows::UI::Xaml::Navigation::NavigationEventArgs const& args )
    {
        NavView ( ).IsBackEnabled ( ContentFrame ( ).CanGoBack ( ) );

//        if ( ContentFrame ( ).SourcePageType ( ).Name ==
//             // jicheng
////             winrt::xaml_typename<MultiThreads::SettingsPage> ( ).Name )
//            winrt::xaml_typename<MultiThreads::implementation::MyContentPage> ( ).Name )
//        {
//            // SettingsItem is not part of NavView.MenuItems, and doesn't have a Tag.
//            NavView ( ).SelectedItem ( NavView ( ).SettingsItem ( ).as<muxc::NavigationViewItem> ( ) );
//            NavView ( ).Header ( winrt::box_value ( L"Settings" ) );
//        }
//        else 
            if ( ContentFrame ( ).SourcePageType ( ).Name != L"" )
        {
            for ( auto&& eachPage : m_pages )
            {
                if ( eachPage.second.Name == args.SourcePageType ( ).Name )
                {
                    for ( auto&& eachMenuItem : NavView ( ).MenuItems ( ) )
                    {
                        auto navigationViewItem =
                            eachMenuItem.try_as<muxc::NavigationViewItem> ( );
                        {
                            if ( navigationViewItem )
                            {
                                winrt::hstring hstringValue =
                                    winrt::unbox_value_or<winrt::hstring> (
                                        navigationViewItem.Tag ( ), L"" );
                                if ( hstringValue == eachPage.first )
                                {
                                    NavView ( ).SelectedItem ( navigationViewItem );
                                    NavView ( ).Header ( navigationViewItem.Content ( ) );
                                }
                            }
                        }
                    }
                    break;
                }
            }
        }
    }
}
