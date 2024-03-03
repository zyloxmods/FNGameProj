#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ConfirmationDialogAction.h"
#include "FortDialogDescription_NUI.h"
#include "Styling/SlateBrush.h"
#include "FortConfirmationResultDelegate_NUIDelegate.h"
#include "FortAsyncAction_ShowConfirmation_NUI.generated.h"

class UFortAsyncAction_ShowConfirmation_NUI;
class UFortLocalPlayer;
class ULocalPlayer;
class UObject;
class UWidget;

UCLASS(Blueprintable)
class UFortAsyncAction_ShowConfirmation_NUI : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortConfirmationResultDelegate_NUI DialogResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* TargetLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDialogDescription_NUI Description;
    
public:
    UFortAsyncAction_ShowConfirmation_NUI();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UFortAsyncAction_ShowConfirmation_NUI* ShowSimpleConfirmationDialog_NUI(UObject* InWorldContextObject, FSlateBrush Icon, FText Title, FText Message, bool bShowConfirm, bool bShowDecline, UWidget* AdditionalContent, UWidget* LeftAdditionalContent, ULocalPlayer* TargetPlayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UFortAsyncAction_ShowConfirmation_NUI* ShowSimpleConfirmationDialog_CustomInput(UObject* InWorldContextObject, FSlateBrush Icon, FText Title, FText Message, FName ConfirmAction, FName DeclineAction, UWidget* AdditionalContent, UWidget* LeftAdditionalContent, bool Cancelable, ULocalPlayer* TargetPlayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UFortAsyncAction_ShowConfirmation_NUI* ShowConfirmationDialog_NUI(UObject* InWorldContextObject, FSlateBrush Icon, FText Title, FText Message, const TArray<FConfirmationDialogAction>& ConfirmButtonInputActions, const FName DeclineButtonInputAction, UWidget* AdditionalContent, UWidget* LeftAdditionalContent, ULocalPlayer* TargetPlayer);
    
};

