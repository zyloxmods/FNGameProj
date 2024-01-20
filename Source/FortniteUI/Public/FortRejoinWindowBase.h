#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortRejoinWindowBase.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRejoinWindowBase : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* RejoinTime;
    
public:
    UFortRejoinWindowBase();
    UFUNCTION(BlueprintCallable)
    void StopTimeout();
    
    UFUNCTION(BlueprintCallable)
    void StartTimeout(float TimeoutTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimeoutTimeReached();
    
};

