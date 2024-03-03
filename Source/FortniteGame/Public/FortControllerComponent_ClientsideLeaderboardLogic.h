#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortControllerComponent.h"
#include "FortInGameLeaderboardPlacementData.h"
#include "FortControllerComponent_ClientsideLeaderboardLogic.generated.h"

class AFortGameStateAthena;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_ClientsideLeaderboardLogic : public UFortControllerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortInGameLeaderboardPlacementData> LeaderBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
public:
    UFortControllerComponent_ClientsideLeaderboardLogic();
private:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
};

