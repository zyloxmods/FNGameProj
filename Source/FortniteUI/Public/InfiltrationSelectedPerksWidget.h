#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LTMWidgetBase.h"
#include "InfiltrationSelectedPerksWidget.generated.h"

class AFortAthenaMutator_Infiltration;
class UFortSpyTechItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UInfiltrationSelectedPerksWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_Infiltration> CachedMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSpyTechItemDefinition*> CurrentDisplayedPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FilterTag;
    
public:
    UInfiltrationSelectedPerksWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePerks();
    
};

