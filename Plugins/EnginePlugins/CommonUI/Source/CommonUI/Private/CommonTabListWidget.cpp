#include "CommonTabListWidget.h"
#include "Templates/SubclassOf.h"

void UCommonTabListWidget::SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility) {
}

void UCommonTabListWidget::SetTabInteractionEnabled(FName TabNameID, bool bEnable) {
}

void UCommonTabListWidget::SetTabEnabled(FName TabNameID, bool bEnable) {
}

void UCommonTabListWidget::SetListeningForInput(bool bShouldListen) {
}

void UCommonTabListWidget::SetLinkedSwitcher(UCommonAnimatedSwitcher* CommonSwitcher) {
}

bool UCommonTabListWidget::SelectTabByID(FName TabNameID, bool bSuppressClickFeedback) {
    return false;
}

bool UCommonTabListWidget::RemoveTab(FName TabNameID) {
    return false;
}

void UCommonTabListWidget::RemoveAllTabs() {
}

bool UCommonTabListWidget::RegisterTab(FName TabNameID, TSubclassOf<UCommonButton> ButtonWidgetType, UWidget* ContentWidget) {
    return false;
}

void UCommonTabListWidget::HandleTabRemoved_Implementation(FName TabNameID, UCommonButton* TabButton) {
}

void UCommonTabListWidget::HandleTabCreated_Implementation(FName TabNameID, UCommonButton* TabButton) {
}

void UCommonTabListWidget::HandleTabButtonSelected(UCommonButton* SelectedTabButton, int32 ButtonIndex) {
}

void UCommonTabListWidget::HandlePreviousTabInputAction(bool& bPassThrough) {
}



void UCommonTabListWidget::HandleNextTabInputAction(bool& bPassThrough) {
}

FName UCommonTabListWidget::GetTabIdAtIndex(int32 Index) const {
    return NAME_None;
}

int32 UCommonTabListWidget::GetTabCount() const {
    return 0;
}

UCommonButton* UCommonTabListWidget::GetTabButtonByID(FName TabNameID) {
    return NULL;
}

FName UCommonTabListWidget::GetSelectedTabId() const {
    return NAME_None;
}

UCommonAnimatedSwitcher* UCommonTabListWidget::GetLinkedSwitcher() const {
    return NULL;
}

FName UCommonTabListWidget::GetActiveTab() const {
    return NAME_None;
}

void UCommonTabListWidget::DisableTabWithReason(FName TabNameID, const FText& Reason) {
}

UCommonTabListWidget::UCommonTabListWidget() {
    this->bAutoListenForInput = false;
    this->TabButtonGroup = NULL;
}

