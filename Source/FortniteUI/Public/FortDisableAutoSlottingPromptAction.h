#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortDialogResult.h"
#include "FortDisableAutoSlottingPromptAction.generated.h"

class APlayerController;
class UGameInstance;

UCLASS(Abstract, Blueprintable)
class UFortDisableAutoSlottingPromptAction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerController> OwningPlayerController;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGameInstance> RegisteredWithGameInstance;
    
public:
    UFortDisableAutoSlottingPromptAction();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Execute();
    
    UFUNCTION(BlueprintCallable)
    void CompleteExecution(const EFortDialogResult Result, const FName ResultName);
    
};

