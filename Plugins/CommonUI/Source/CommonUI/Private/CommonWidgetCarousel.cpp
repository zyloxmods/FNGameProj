#include "CommonWidgetCarousel.h"

void UCommonWidgetCarousel::SetActiveWidgetIndex(int32 Index) {
}

void UCommonWidgetCarousel::SetActiveWidget(UWidget* Widget) {
}

void UCommonWidgetCarousel::PreviousPage() {
}

void UCommonWidgetCarousel::NextPage() {
}

UWidget* UCommonWidgetCarousel::GetWidgetAtIndex(int32 Index) const {
    return NULL;
}

int32 UCommonWidgetCarousel::GetActiveWidgetIndex() const {
    return 0;
}

void UCommonWidgetCarousel::EndAutoScrolling() {
}

void UCommonWidgetCarousel::BeginAutoScrolling(float ScrollInterval) {
}

UCommonWidgetCarousel::UCommonWidgetCarousel() {
    this->ActiveWidgetIndex = 0;
}

