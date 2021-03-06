// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200917.4

#ifndef WINRT_Microsoft_UI_Xaml_Controls_Primitives_2_H
#define WINRT_Microsoft_UI_Xaml_Controls_Primitives_2_H
#include "winrt/impl/Microsoft.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Input.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.1.h"
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.Controls.Primitives.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Controls::Primitives
{
    struct __declspec(empty_bases) AutoSuggestBoxHelper : Microsoft::UI::Xaml::Controls::Primitives::IAutoSuggestBoxHelper
    {
        AutoSuggestBoxHelper(std::nullptr_t) noexcept {}
        AutoSuggestBoxHelper(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IAutoSuggestBoxHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto KeepInteriorCornersSquareProperty();
        static auto SetKeepInteriorCornersSquare(Windows::UI::Xaml::Controls::AutoSuggestBox const& autoSuggestBox, bool value);
        static auto GetKeepInteriorCornersSquare(Windows::UI::Xaml::Controls::AutoSuggestBox const& autoSuggestBox);
    };
    struct __declspec(empty_bases) ColorPickerSlider : Microsoft::UI::Xaml::Controls::Primitives::IColorPickerSlider,
        impl::base<ColorPickerSlider, Windows::UI::Xaml::Controls::Slider, Windows::UI::Xaml::Controls::Primitives::RangeBase, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorPickerSlider, Windows::UI::Xaml::Controls::ISlider, Windows::UI::Xaml::Controls::ISlider2, Windows::UI::Xaml::Controls::Primitives::IRangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ColorPickerSlider(std::nullptr_t) noexcept {}
        ColorPickerSlider(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IColorPickerSlider(ptr, take_ownership_from_abi) {}
        ColorPickerSlider();
        [[nodiscard]] static auto ColorChannelProperty();
    };
    struct __declspec(empty_bases) ColorSpectrum : Microsoft::UI::Xaml::Controls::Primitives::IColorSpectrum,
        impl::base<ColorSpectrum, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorSpectrum, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ColorSpectrum(std::nullptr_t) noexcept {}
        ColorSpectrum(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IColorSpectrum(ptr, take_ownership_from_abi) {}
        ColorSpectrum();
        [[nodiscard]] static auto ColorProperty();
        [[nodiscard]] static auto HsvColorProperty();
        [[nodiscard]] static auto MinHueProperty();
        [[nodiscard]] static auto MaxHueProperty();
        [[nodiscard]] static auto MinSaturationProperty();
        [[nodiscard]] static auto MaxSaturationProperty();
        [[nodiscard]] static auto MinValueProperty();
        [[nodiscard]] static auto MaxValueProperty();
        [[nodiscard]] static auto ShapeProperty();
        [[nodiscard]] static auto ComponentsProperty();
    };
    struct __declspec(empty_bases) ColumnMajorUniformToLargestGridLayout : Microsoft::UI::Xaml::Controls::Primitives::IColumnMajorUniformToLargestGridLayout,
        impl::base<ColumnMajorUniformToLargestGridLayout, Microsoft::UI::Xaml::Controls::NonVirtualizingLayout, Microsoft::UI::Xaml::Controls::Layout, Windows::UI::Xaml::DependencyObject>,
        impl::require<ColumnMajorUniformToLargestGridLayout, Microsoft::UI::Xaml::Controls::INonVirtualizingLayout, Microsoft::UI::Xaml::Controls::INonVirtualizingLayoutOverrides, Microsoft::UI::Xaml::Controls::ILayout, Microsoft::UI::Xaml::Controls::ILayoutProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ColumnMajorUniformToLargestGridLayout(std::nullptr_t) noexcept {}
        ColumnMajorUniformToLargestGridLayout(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IColumnMajorUniformToLargestGridLayout(ptr, take_ownership_from_abi) {}
        ColumnMajorUniformToLargestGridLayout();
        [[nodiscard]] static auto MaxColumnsProperty();
        [[nodiscard]] static auto ColumnSpacingProperty();
        [[nodiscard]] static auto RowSpacingProperty();
    };
    struct __declspec(empty_bases) ComboBoxHelper : Microsoft::UI::Xaml::Controls::Primitives::IComboBoxHelper
    {
        ComboBoxHelper(std::nullptr_t) noexcept {}
        ComboBoxHelper(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IComboBoxHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto KeepInteriorCornersSquareProperty();
        static auto SetKeepInteriorCornersSquare(Windows::UI::Xaml::Controls::ComboBox const& comboBox, bool value);
        static auto GetKeepInteriorCornersSquare(Windows::UI::Xaml::Controls::ComboBox const& comboBox);
    };
    struct __declspec(empty_bases) CommandBarFlyoutCommandBar : Microsoft::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar,
        impl::base<CommandBarFlyoutCommandBar, Windows::UI::Xaml::Controls::CommandBar, Windows::UI::Xaml::Controls::AppBar, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBarFlyoutCommandBar, Windows::UI::Xaml::Controls::ICommandBar, Windows::UI::Xaml::Controls::ICommandBar2, Windows::UI::Xaml::Controls::ICommandBar3, Windows::UI::Xaml::Controls::IAppBar, Windows::UI::Xaml::Controls::IAppBar2, Windows::UI::Xaml::Controls::IAppBar3, Windows::UI::Xaml::Controls::IAppBar4, Windows::UI::Xaml::Controls::IAppBarOverrides, Windows::UI::Xaml::Controls::IAppBarOverrides3, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBarFlyoutCommandBar(std::nullptr_t) noexcept {}
        CommandBarFlyoutCommandBar(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar(ptr, take_ownership_from_abi) {}
        CommandBarFlyoutCommandBar();
    };
    struct __declspec(empty_bases) CommandBarFlyoutCommandBarTemplateSettings : Microsoft::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings,
        impl::base<CommandBarFlyoutCommandBarTemplateSettings, Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBarFlyoutCommandBarTemplateSettings, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBarFlyoutCommandBarTemplateSettings(std::nullptr_t) noexcept {}
        CommandBarFlyoutCommandBarTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CornerRadiusFilterConverter : Microsoft::UI::Xaml::Controls::Primitives::ICornerRadiusFilterConverter,
        impl::base<CornerRadiusFilterConverter, Windows::UI::Xaml::DependencyObject>,
        impl::require<CornerRadiusFilterConverter, Windows::UI::Xaml::Data::IValueConverter, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CornerRadiusFilterConverter(std::nullptr_t) noexcept {}
        CornerRadiusFilterConverter(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::ICornerRadiusFilterConverter(ptr, take_ownership_from_abi) {}
        CornerRadiusFilterConverter();
        [[nodiscard]] static auto FilterProperty();
        [[nodiscard]] static auto ScaleProperty();
    };
    struct __declspec(empty_bases) CornerRadiusToThicknessConverter : Microsoft::UI::Xaml::Controls::Primitives::ICornerRadiusToThicknessConverter,
        impl::base<CornerRadiusToThicknessConverter, Windows::UI::Xaml::DependencyObject>,
        impl::require<CornerRadiusToThicknessConverter, Windows::UI::Xaml::Data::IValueConverter, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        CornerRadiusToThicknessConverter(std::nullptr_t) noexcept {}
        CornerRadiusToThicknessConverter(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::ICornerRadiusToThicknessConverter(ptr, take_ownership_from_abi) {}
        CornerRadiusToThicknessConverter();
        [[nodiscard]] static auto ConversionKindProperty();
        [[nodiscard]] static auto MultiplierProperty();
    };
    struct __declspec(empty_bases) NavigationViewItemPresenter : Microsoft::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter,
        impl::base<NavigationViewItemPresenter, Windows::UI::Xaml::Controls::ContentControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationViewItemPresenter, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationViewItemPresenter(std::nullptr_t) noexcept {}
        NavigationViewItemPresenter(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter(ptr, take_ownership_from_abi) {}
        NavigationViewItemPresenter();
        [[nodiscard]] static auto IconProperty();
    };
    struct __declspec(empty_bases) RepeatedScrollSnapPoint : Microsoft::UI::Xaml::Controls::Primitives::IRepeatedScrollSnapPoint,
        impl::base<RepeatedScrollSnapPoint, Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::SnapPointBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<RepeatedScrollSnapPoint, Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RepeatedScrollSnapPoint(std::nullptr_t) noexcept {}
        RepeatedScrollSnapPoint(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IRepeatedScrollSnapPoint(ptr, take_ownership_from_abi) {}
        RepeatedScrollSnapPoint(double offset, double interval, double start, double end, Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointsAlignment const& alignment);
    };
    struct __declspec(empty_bases) RepeatedZoomSnapPoint : Microsoft::UI::Xaml::Controls::Primitives::IRepeatedZoomSnapPoint,
        impl::base<RepeatedZoomSnapPoint, Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::SnapPointBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<RepeatedZoomSnapPoint, Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        RepeatedZoomSnapPoint(std::nullptr_t) noexcept {}
        RepeatedZoomSnapPoint(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IRepeatedZoomSnapPoint(ptr, take_ownership_from_abi) {}
        RepeatedZoomSnapPoint(double offset, double interval, double start, double end);
    };
    struct __declspec(empty_bases) ScrollControllerAddScrollVelocityRequestedEventArgs : Microsoft::UI::Xaml::Controls::Primitives::IScrollControllerAddScrollVelocityRequestedEventArgs
    {
        ScrollControllerAddScrollVelocityRequestedEventArgs(std::nullptr_t) noexcept {}
        ScrollControllerAddScrollVelocityRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IScrollControllerAddScrollVelocityRequestedEventArgs(ptr, take_ownership_from_abi) {}
        ScrollControllerAddScrollVelocityRequestedEventArgs(float offsetVelocity, Windows::Foundation::IReference<float> const& inertiaDecayRate);
    };
    struct __declspec(empty_bases) ScrollControllerInteractionRequestedEventArgs : Microsoft::UI::Xaml::Controls::Primitives::IScrollControllerInteractionRequestedEventArgs
    {
        ScrollControllerInteractionRequestedEventArgs(std::nullptr_t) noexcept {}
        ScrollControllerInteractionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IScrollControllerInteractionRequestedEventArgs(ptr, take_ownership_from_abi) {}
        explicit ScrollControllerInteractionRequestedEventArgs(Windows::UI::Input::PointerPoint const& pointerPoint);
    };
    struct __declspec(empty_bases) ScrollControllerScrollByRequestedEventArgs : Microsoft::UI::Xaml::Controls::Primitives::IScrollControllerScrollByRequestedEventArgs
    {
        ScrollControllerScrollByRequestedEventArgs(std::nullptr_t) noexcept {}
        ScrollControllerScrollByRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IScrollControllerScrollByRequestedEventArgs(ptr, take_ownership_from_abi) {}
        ScrollControllerScrollByRequestedEventArgs(double offsetDelta, Microsoft::UI::Xaml::Controls::ScrollingScrollOptions const& options);
    };
    struct __declspec(empty_bases) ScrollControllerScrollToRequestedEventArgs : Microsoft::UI::Xaml::Controls::Primitives::IScrollControllerScrollToRequestedEventArgs
    {
        ScrollControllerScrollToRequestedEventArgs(std::nullptr_t) noexcept {}
        ScrollControllerScrollToRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IScrollControllerScrollToRequestedEventArgs(ptr, take_ownership_from_abi) {}
        ScrollControllerScrollToRequestedEventArgs(double offset, Microsoft::UI::Xaml::Controls::ScrollingScrollOptions const& options);
    };
    struct __declspec(empty_bases) ScrollPresenter : Microsoft::UI::Xaml::Controls::Primitives::IScrollPresenter,
        impl::base<ScrollPresenter, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<ScrollPresenter, Windows::UI::Xaml::Controls::IScrollAnchorProvider, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ScrollPresenter(std::nullptr_t) noexcept {}
        ScrollPresenter(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IScrollPresenter(ptr, take_ownership_from_abi) {}
        ScrollPresenter();
        [[nodiscard]] static auto BackgroundProperty();
        [[nodiscard]] static auto ContentProperty();
        [[nodiscard]] static auto ContentOrientationProperty();
        [[nodiscard]] static auto HorizontalScrollChainModeProperty();
        [[nodiscard]] static auto VerticalScrollChainModeProperty();
        [[nodiscard]] static auto HorizontalScrollRailModeProperty();
        [[nodiscard]] static auto VerticalScrollRailModeProperty();
        [[nodiscard]] static auto HorizontalScrollModeProperty();
        [[nodiscard]] static auto VerticalScrollModeProperty();
        [[nodiscard]] static auto ZoomChainModeProperty();
        [[nodiscard]] static auto ZoomModeProperty();
        [[nodiscard]] static auto IgnoredInputKindsProperty();
        [[nodiscard]] static auto MinZoomFactorProperty();
        [[nodiscard]] static auto MaxZoomFactorProperty();
        [[nodiscard]] static auto HorizontalAnchorRatioProperty();
        [[nodiscard]] static auto VerticalAnchorRatioProperty();
    };
    struct __declspec(empty_bases) ScrollSnapPoint : Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPoint,
        impl::base<ScrollSnapPoint, Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::SnapPointBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<ScrollSnapPoint, Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ScrollSnapPoint(std::nullptr_t) noexcept {}
        ScrollSnapPoint(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPoint(ptr, take_ownership_from_abi) {}
        ScrollSnapPoint(double snapPointValue, Microsoft::UI::Xaml::Controls::Primitives::ScrollSnapPointsAlignment const& alignment);
    };
    struct __declspec(empty_bases) ScrollSnapPointBase : Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase,
        impl::base<ScrollSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::SnapPointBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<ScrollSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ScrollSnapPointBase(std::nullptr_t) noexcept {}
        ScrollSnapPointBase(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IScrollSnapPointBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SnapPointBase : Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase,
        impl::base<SnapPointBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<SnapPointBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        SnapPointBase(std::nullptr_t) noexcept {}
        SnapPointBase(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TabViewListView : Microsoft::UI::Xaml::Controls::Primitives::ITabViewListView,
        impl::base<TabViewListView, Windows::UI::Xaml::Controls::ListView, Windows::UI::Xaml::Controls::ListViewBase, Windows::UI::Xaml::Controls::Primitives::Selector, Windows::UI::Xaml::Controls::ItemsControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
        impl::require<TabViewListView, Windows::UI::Xaml::Controls::IListView, Windows::UI::Xaml::Controls::IListViewBase, Windows::UI::Xaml::Controls::IListViewBase2, Windows::UI::Xaml::Controls::IListViewBase3, Windows::UI::Xaml::Controls::IListViewBase4, Windows::UI::Xaml::Controls::IListViewBase5, Windows::UI::Xaml::Controls::IListViewBase6, Windows::UI::Xaml::Controls::ISemanticZoomInformation, Windows::UI::Xaml::Controls::Primitives::ISelector, Windows::UI::Xaml::Controls::IItemsControl, Windows::UI::Xaml::Controls::IItemsControl2, Windows::UI::Xaml::Controls::IItemsControl3, Windows::UI::Xaml::Controls::IItemsControlOverrides, Windows::UI::Xaml::Controls::IItemContainerMapping, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControl7, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IFrameworkElement7, Windows::UI::Xaml::IFrameworkElementProtected7, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::IUIElement9, Windows::UI::Xaml::IUIElement10, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, Windows::UI::Xaml::IUIElementOverrides9, Windows::UI::Composition::IAnimationObject, Windows::UI::Composition::IVisualElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        TabViewListView(std::nullptr_t) noexcept {}
        TabViewListView(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::ITabViewListView(ptr, take_ownership_from_abi) {}
        TabViewListView();
    };
    struct __declspec(empty_bases) ZoomSnapPoint : Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPoint,
        impl::base<ZoomSnapPoint, Microsoft::UI::Xaml::Controls::Primitives::ZoomSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::SnapPointBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<ZoomSnapPoint, Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ZoomSnapPoint(std::nullptr_t) noexcept {}
        ZoomSnapPoint(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPoint(ptr, take_ownership_from_abi) {}
        explicit ZoomSnapPoint(double snapPointValue);
    };
    struct __declspec(empty_bases) ZoomSnapPointBase : Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase,
        impl::base<ZoomSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::SnapPointBase, Windows::UI::Xaml::DependencyObject>,
        impl::require<ZoomSnapPointBase, Microsoft::UI::Xaml::Controls::Primitives::ISnapPointBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
    {
        ZoomSnapPointBase(std::nullptr_t) noexcept {}
        ZoomSnapPointBase(void* ptr, take_ownership_from_abi_t) noexcept : Microsoft::UI::Xaml::Controls::Primitives::IZoomSnapPointBase(ptr, take_ownership_from_abi) {}
    };
}
#endif
