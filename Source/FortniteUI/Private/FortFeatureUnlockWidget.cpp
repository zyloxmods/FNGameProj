#include "FortFeatureUnlockWidget.h"

void UFortFeatureUnlockWidget::SetData(const FString& ItemTemplateID) {
}


UMediaSource* UFortFeatureUnlockWidget::GetVideo() const {
    return NULL;
}

FText UFortFeatureUnlockWidget::GetTitle() const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UFortFeatureUnlockWidget::GetSmallIcon() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UFortFeatureUnlockWidget::GetLargeIcon() const {
    return NULL;
}

FText UFortFeatureUnlockWidget::GetDescription() const {
    return FText::GetEmpty();
}

UFortFeatureUnlockWidget::UFortFeatureUnlockWidget() {
    this->MediaSwitcher = NULL;
    this->VideoContent = NULL;
    this->ImageContent = NULL;
    this->VideoWidget = NULL;
    this->ImageWidget = NULL;
}

