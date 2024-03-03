#pragma once
#include "CoreMinimal.h"
#include "AISubsystem.h"
#include "FortServerBotInfo.h"
#include "AthenaAIPopulationTracker.generated.h"

class AFortAthenaAIBotController;
class AFortGameModeAthena;
class AFortPawn;
class APawn;

UCLASS(Blueprintable)
class UAthenaAIPopulationTracker : public UAISubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortServerBotInfo> PlayerBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortServerBotInfo> NoneAthenaParticipantBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CachedGameMode;
    
public:
    UAthenaAIPopulationTracker();
    UFUNCTION(BlueprintCallable)
    void OnAISpawned(APawn* Pawn, const int32 RequestID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAgentGameOver(AFortAthenaAIBotController* AIBotController, AFortPawn* Pawn);
    
};

