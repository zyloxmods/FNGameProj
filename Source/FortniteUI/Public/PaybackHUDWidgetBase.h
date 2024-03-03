#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "PaybackHUDWidgetBase.generated.h"

class AFortAthenaMutator_Payback;
class AFortGameplayMutator;

UCLASS(Blueprintable, EditInlineNew)
class UPaybackHUDWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Payback* CachedPaybackMutator;
    
public:
    UPaybackHUDWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMutatorAvailable(AFortGameplayMutator* MutatorActor);
    
};

