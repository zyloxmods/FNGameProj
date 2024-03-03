#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "GalileoWrapperWidget.generated.h"

class AFortGameplayMutator;

UCLASS(Blueprintable, EditInlineNew)
class UGalileoWrapperWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortGameplayMutator> MutatorClassToWaitFor;
    
public:
    UGalileoWrapperWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResumeGame();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnResumeGame();
    
};

