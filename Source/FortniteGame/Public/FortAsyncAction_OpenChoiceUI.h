#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ChoiceData.h"
#include "FortChoiceUiFailureDelegateDelegate.h"
#include "FortChoiceUiSuccessDelegateDelegate.h"
#include "FortAsyncAction_OpenChoiceUI.generated.h"

class AFortPlayerController;
class UFortAsyncAction_OpenChoiceUI;

UCLASS(Blueprintable)
class UFortAsyncAction_OpenChoiceUI : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortChoiceUiSuccessDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortChoiceUiFailureDelegate OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChoiceData ChoiceItems;
    
public:
    UFortAsyncAction_OpenChoiceUI();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_OpenChoiceUI* OpenChoiceUI(AFortPlayerController* NewPlayerController, FChoiceData NewChoiceItems);
    
};

