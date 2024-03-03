#include "FortUIBlueprintFunctionLibrary.h"

void UFortUIBlueprintFunctionLibrary::UnregisterActiveCinematic(UObject* Context) {
}

void UFortUIBlueprintFunctionLibrary::TryPushWidgetAsModalPanelForPlayer(AFortPlayerController* LocalPlayerController, UUserWidget* PushWidget) {
}

void UFortUIBlueprintFunctionLibrary::TryPushWidgetAsModalPanel(UUserWidget* Context, UUserWidget* PushWidget) {
}

void UFortUIBlueprintFunctionLibrary::TryPushWidgetAsActivatablePanelForPlayer(APlayerController* OwningPlayer, UUserWidget* PushWidget, EActivatePanelOption Header, EActivatePanelOption Footer, EActivatePanelOption ChatWidget) {
}

void UFortUIBlueprintFunctionLibrary::TryPushWidgetAsActivatablePanel(UUserWidget* Context, UUserWidget* PushWidget, EActivatePanelOption Header, EActivatePanelOption Footer, EActivatePanelOption ChatWidget) {
}

void UFortUIBlueprintFunctionLibrary::TryPopActivatablePanel(UUserWidget* Context, UCommonActivatablePanel* Panel) {
}

void UFortUIBlueprintFunctionLibrary::SortActorArray(const TArray<AActor*>& InActors, TArray<AActor*>& OutSortedActors) {
}

void UFortUIBlueprintFunctionLibrary::ShowErrorDialog(UUserWidget* Context, FText DisplayMessage, const FString& ErrorCode, EFortErrorSeverity ErrorSeverity) {
}

void UFortUIBlueprintFunctionLibrary::SetScrollWidget(UUserWidget* Context, UWidget* ToScroll) {
}

float UFortUIBlueprintFunctionLibrary::RoundFloat(float Value, TEnumAsByte<ERoundingMode> RoundingMode) {
    return 0.0f;
}

void UFortUIBlueprintFunctionLibrary::ResetKeyboardMousePlayerBindingsToPreset(AFortPlayerController* LocalPlayerController, int32 PresetToSet) {
}

void UFortUIBlueprintFunctionLibrary::RequestToOpenPlayerFeedbackModal(UUserWidget* Context) {
}

void UFortUIBlueprintFunctionLibrary::RegisterActiveCinematic(UObject* Context) {
}

void UFortUIBlueprintFunctionLibrary::PushContentWidgetForPlayer(AFortPlayerController* LocalPlayerController, UWidget* PushWidget) {
}

void UFortUIBlueprintFunctionLibrary::PushContentWidgetAdvancedForPlayer(AFortPlayerController* LocalPlayerController, UWidget* PushWidget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget) {
}

void UFortUIBlueprintFunctionLibrary::PushContentWidgetAdvanced(UUserWidget* Context, UWidget* PushWidget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget) {
}

void UFortUIBlueprintFunctionLibrary::PushContentWidget(UUserWidget* Context, UWidget* PushWidget) {
}

void UFortUIBlueprintFunctionLibrary::PushActivatablePanel(UUserWidget* Context, UCommonActivatablePanel* Panel) {
}

void UFortUIBlueprintFunctionLibrary::PopCurrentModal(UUserWidget* Context) {
}

void UFortUIBlueprintFunctionLibrary::PopContentWidgetForPlayer(AFortPlayerController* LocalPlayerController) {
}

void UFortUIBlueprintFunctionLibrary::PopContentWidget(UUserWidget* Context) {
}

void UFortUIBlueprintFunctionLibrary::PopAllContentWidgets(UUserWidget* Context) {
}

void UFortUIBlueprintFunctionLibrary::PopActivatablePanelInModalLayer(UUserWidget* Context, UCommonActivatablePanel* Panel) {
}

void UFortUIBlueprintFunctionLibrary::PopActivatablePanel(UUserWidget* Context, UCommonActivatablePanel* Panel) {
}

void UFortUIBlueprintFunctionLibrary::NavigateToFeature(UUserWidget* Context, EFortUIFeature Feature) {
}

void UFortUIBlueprintFunctionLibrary::NavigateForGift(UUserWidget* Context, UFortGiftBoxItem* Item) {
}

void UFortUIBlueprintFunctionLibrary::KillConfirmation(UUserWidget* Context) {
}

bool UFortUIBlueprintFunctionLibrary::IsUIAddedToViewport(AFortPlayerController* LocalPlayerController) {
    return false;
}

FText UFortUIBlueprintFunctionLibrary::GetTimespanAsSimpleString(FTimespan Timespan) {
    return FText::GetEmpty();
}

FVector2D UFortUIBlueprintFunctionLibrary::GetStandardBrushSize(TEnumAsByte<EFortBrushSize::Type> BrushSize) {
    return FVector2D{};
}

UTexture2D* UFortUIBlueprintFunctionLibrary::GetOrLoadSynchronously(const TSoftObjectPtr<UTexture2D>& SoftTexture2D) {
    return NULL;
}

FString UFortUIBlueprintFunctionLibrary::GetMetaStringOnOffer(const FCardPackOffer& Offer, const FString& Key) {
    return TEXT("");
}

int32 UFortUIBlueprintFunctionLibrary::GetMetaIntOnOffer(const FCardPackOffer& Offer, const FString& Key, int32 DefaultValue) {
    return 0;
}

bool UFortUIBlueprintFunctionLibrary::GetMetaBoolOnOffer(const FCardPackOffer& Offer, const FString& Key, bool bDefaultValue) {
    return false;
}

FFortMultiSizeBrush UFortUIBlueprintFunctionLibrary::GetItemSmallPreviewImageMultiSizeBrush(const UFortItem* Item) {
    return FFortMultiSizeBrush{};
}

FSlateBrush UFortUIBlueprintFunctionLibrary::GetItemSmallPreviewImageBrush(const UFortItem* Item, TEnumAsByte<EFortBrushSize::Type> BrushSize) {
    return FSlateBrush{};
}

FFortMultiSizeBrush UFortUIBlueprintFunctionLibrary::GetItemDefinitionSmallPreviewImageMultiSizeBrush(const UFortItemDefinition* ItemDefinition) {
    return FFortMultiSizeBrush{};
}

FSlateBrush UFortUIBlueprintFunctionLibrary::GetItemDefinitionSmallPreviewImageBrush(const UFortItemDefinition* ItemDefinition, TEnumAsByte<EFortBrushSize::Type> BrushSize) {
    return FSlateBrush{};
}

UFortUIStateWidget_NUI* UFortUIBlueprintFunctionLibrary::GetCurrentUIStateWidget(UUserWidget* Context) {
    return NULL;
}

UCommonActivatablePanel* UFortUIBlueprintFunctionLibrary::GetCurrentModal(UUserWidget* Context) {
    return NULL;
}

UUserWidget* UFortUIBlueprintFunctionLibrary::GetCachedWidgetForPlayer(AFortPlayerController* LocalPlayerController, UClass* WidgetClass) {
    return NULL;
}

UUserWidget* UFortUIBlueprintFunctionLibrary::GetCachedWidget(UUserWidget* Context, UClass* WidgetClass) {
    return NULL;
}

UObject* UFortUIBlueprintFunctionLibrary::GetAssetFromTemplateId(const FString& TemplateId) {
    return NULL;
}

void UFortUIBlueprintFunctionLibrary::DrawWidgetToRenderTarget(UUserWidget* Widget, UTextureRenderTarget2D* RenderTarget) {
}

void UFortUIBlueprintFunctionLibrary::CenterWidget(UUserWidget* Context, UWidget* ToCenter) {
}

void UFortUIBlueprintFunctionLibrary::BindToOnShouldOpenTalkingHead(UUserWidget* Context, const UFortUIBlueprintFunctionLibrary::FOpenTalkingHeadDelegate& Delegate) {
}

void UFortUIBlueprintFunctionLibrary::BindToOnShouldCloseTalkingHead(UUserWidget* Context, const UFortUIBlueprintFunctionLibrary::FCloseTalkingHeadDelegate& Delegate) {
}

void UFortUIBlueprintFunctionLibrary::BindToOnShouldBlockSubtitlePortraitChanged(UUserWidget* Context, const UFortUIBlueprintFunctionLibrary::FBlockSubtitlePortraitDelegate& Delegate) {
}

void UFortUIBlueprintFunctionLibrary::BindToOnEndSpokenDialog(UUserWidget* Context, const UFortUIBlueprintFunctionLibrary::FSpokenDialogDelegate& Delegate) {
}

bool UFortUIBlueprintFunctionLibrary::AreModalsConfirmationsErrorsActive(AFortPlayerController* LocalPlayerController) {
    return false;
}

bool UFortUIBlueprintFunctionLibrary::AreModalsActive(AFortPlayerController* LocalPlayerController) {
    return false;
}

UFortUIBlueprintFunctionLibrary::UFortUIBlueprintFunctionLibrary() {
}

