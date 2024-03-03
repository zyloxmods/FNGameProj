#pragma once
#include "CoreMinimal.h"
#include "EMinigameActivityComponentValidityResult.h"
#include "EMinigameActivityStat.h"
#include "FortControllerComponent.h"
#include "MinigameActivityEndedData.h"
#include "MinigameActivityStartedData.h"
#include "FortControllerComponent_MinigameActivity.generated.h"

class APawn;
class UFortControllerComponent_MinigameActivity;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_MinigameActivity : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_MinigameActivity();
    UFUNCTION(BlueprintCallable)
    static UFortControllerComponent_MinigameActivity* GetMinigameActivityComponent(const APawn* Pawn, EMinigameActivityComponentValidityResult& OutIsValid);
    
    UFUNCTION(BlueprintCallable)
    void ForwardMinigameActivityStatChanged(EMinigameActivityStat Stat, float Value);
    
    UFUNCTION(BlueprintCallable)
    void ForwardMinigameActivityStarted(const FMinigameActivityStartedData& StartData);
    
    UFUNCTION(BlueprintCallable)
    void ForwardMinigameActivityScoreChanged(int32 CurrentScore, int32 TotalScore);
    
    UFUNCTION(BlueprintCallable)
    void ForwardMinigameActivityRankChanged(int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    void ForwardMinigameActivityEnded(const FMinigameActivityEndedData& EndData);
    
};

