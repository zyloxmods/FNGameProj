#pragma once
#include "CoreMinimal.h"
#include "FortInGameLeaderboardPlacementData.h"
#include "LTMWidgetBase.h"
#include "GenericLeaderboardDisplayWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGenericLeaderboardDisplayWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UGenericLeaderboardDisplayWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplay(const TArray<FFortInGameLeaderboardPlacementData>& Data);
    
};

