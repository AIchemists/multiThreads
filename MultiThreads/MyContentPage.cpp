#include "pch.h"
#include "MyContentPage.h"
#include "MyContentPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::MultiThreads::implementation
{
    MyContentPage::MyContentPage ( )
    {
        InitializeComponent ( );
    }

    int32_t MyContentPage::MyProperty ( )
    {
        throw hresult_not_implemented ( );
    }

    void MyContentPage::MyProperty ( int32_t /* value */ )
    {
        throw hresult_not_implemented ( );
    }
}
