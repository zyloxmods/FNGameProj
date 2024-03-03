#include "FortAsyncAction_ShowAdvancedLatentConfirmation_NUI.h"

UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI::ShowAdvancedLatentActionConfirmation(UObject* InWorldContextObject, FSlateBrush Icon, FText Title, FText Message, const TArray<FConfirmationDialogAction>& ConfirmButtonInputActions, const FName DeclineButtonInputAction, UWidget* AdditionalContent, UWidget* LeftAdditionalContent, ULocalPlayer* TargetPlayer) {
    return NULL;
}

UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI::UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI() {
    this->WorldContextObject = NULL;
    this->TargetLocalPlayer = NULL;
}

