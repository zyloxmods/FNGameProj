#pragma once
#include "CoreMinimal.h"
#include "FortInGameLeaderboardPlacementData.h"
#include "LTMWidgetBase.h"
#include "SoundThreshold.h"
#include "RumbleLeaderBoard.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URumbleLeaderBoard : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundThreshold> ThresholdArray;
    
public:
    URumbleLeaderBoard();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWidget(const TArray<FFortInGameLeaderboardPlacementData>& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisuals(const TArray<FFortInGameLeaderboardPlacementData>& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGoalValue(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThresholdPassed(const FSoundThreshold& SoundThreshold, int32 ThresholdIndex, bool bIsLocalPlayer);
    
};

