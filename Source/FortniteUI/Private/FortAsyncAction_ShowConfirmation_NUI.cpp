#include "FortAsyncAction_ShowConfirmation_NUI.h"

UFortAsyncAction_ShowConfirmation_NUI* UFortAsyncAction_ShowConfirmation_NUI::ShowSimpleConfirmationDialog_NUI(UObject* InWorldContextObject, FSlateBrush Icon, FText Title, FText Message, bool bShowConfirm, bool bShowDecline, UWidget* AdditionalContent, UWidget* LeftAdditionalContent, ULocalPlayer* TargetPlayer) {
    return NULL;
}

UFortAsyncAction_ShowConfirmation_NUI* UFortAsyncAction_ShowConfirmation_NUI::ShowSimpleConfirmationDialog_CustomInput(UObject* InWorldContextObject, FSlateBrush Icon, FText Title, FText Message, FName ConfirmAction, FName DeclineAction, UWidget* AdditionalContent, UWidget* LeftAdditionalContent, bool Cancelable, ULocalPlayer* TargetPlayer) {
    return NULL;
}

UFortAsyncAction_ShowConfirmation_NUI* UFortAsyncAction_ShowConfirmation_NUI::ShowConfirmationDialog_NUI(UObject* InWorldContextObject, FSlateBrush Icon, FText Title, FText Message, const TArray<FConfirmationDialogAction>& ConfirmButtonInputActions, const FName DeclineButtonInputAction, UWidget* AdditionalContent, UWidget* LeftAdditionalContent, ULocalPlayer* TargetPlayer) {
    return NULL;
}

UFortAsyncAction_ShowConfirmation_NUI::UFortAsyncAction_ShowConfirmation_NUI() {
    this->WorldContextObject = NULL;
    this->TargetLocalPlayer = NULL;
}

