#include "CommonWidgetCarouselNavBar.h"

void UCommonWidgetCarouselNavBar::SetLinkedCarousel(UCommonWidgetCarousel* CommonCarousel) {
}

void UCommonWidgetCarouselNavBar::HandlePageChanged(UCommonWidgetCarousel* CommonCarousel, int32 PageIndex) {
}

void UCommonWidgetCarouselNavBar::HandleButtonClicked(UCommonButton* AssociatedButton, int32 ButtonIndex) {
}

UCommonWidgetCarouselNavBar::UCommonWidgetCarouselNavBar() {
    this->ButtonWidgetType = NULL;
    this->LinkedCarousel = NULL;
    this->ButtonGroup = NULL;
}

