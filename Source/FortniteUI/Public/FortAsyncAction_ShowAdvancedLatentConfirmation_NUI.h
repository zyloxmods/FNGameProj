#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ConfirmationDialogAction.h"
#include "FortDialogDescription_NUI.h"
#include "Styling/SlateBrush.h"
#include "FortAdvancedLatentConfirmationDialogResultDelegate_NUIDelegate.h"
#include "FortAsyncAction_ShowAdvancedLatentConfirmation_NUI.generated.h"

class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI;
class UFortLocalPlayer;
class ULocalPlayer;
class UObject;
class UWidget;

UCLASS(Blueprintable)
class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAdvancedLatentConfirmationDialogResultDelegate_NUI DialogResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* TargetLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDialogDescription_NUI Description;
    
public:
    UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* ShowAdvancedLatentActionConfirmation(UObject* InWorldContextObject, FSlateBrush Icon, FText Title, FText Message, const TArray<FConfirmationDialogAction>& ConfirmButtonInputActions, const FName DeclineButtonInputAction, UWidget* AdditionalContent, UWidget* LeftAdditionalContent, ULocalPlayer* TargetPlayer);
    
};

