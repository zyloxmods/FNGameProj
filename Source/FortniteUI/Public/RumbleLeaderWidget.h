#pragma once
#include "CoreMinimal.h"
#include "FortInGameLeaderboardPlacementData.h"
#include "LTMWidgetBase.h"
#include "RumbleLeaderWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URumbleLeaderWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    URumbleLeaderWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplay(const FFortInGameLeaderboardPlacementData& LeaderEntry, bool bIsTiedForLead);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaderboardUpdate(const TArray<FFortInGameLeaderboardPlacementData>& Data);
    
};

