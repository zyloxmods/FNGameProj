#pragma once
#include "CoreMinimal.h"
#include "AthenaDiscoverabilityBase.h"
#include "AthenaVisitedAreaDisplay.generated.h"

class UCommonTextBlock;
class UFortQuestItem;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaVisitedAreaDisplay : public UAthenaDiscoverabilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CommonTextBlock_AvailableChallenges;
    
public:
    UAthenaVisitedAreaDisplay();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewVisited(const FText& LocalizedLocationName, bool bIsNamedLocation);
    
    UFUNCTION(BlueprintCallable)
    void HandleNewContextualObjectives(const TArray<UFortQuestItem*>& ContextualQuests);
    
    UFUNCTION(BlueprintCallable)
    void HandleContextualObjectivesInvalidated();
    
};

