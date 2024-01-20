#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaMutator_SpawningPolicySafezone.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Bots.generated.h"

class AActor;
class AFortPlayerPawnAthena;
class UFortServerBotManagerAthena;

UCLASS(Blueprintable)
class AFortAthenaMutator_Bots : public AFortAthenaMutator_SpawningPolicySafezone {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBotHostileToHumanPlayersOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortServerBotManagerAthena> ServerBotManagerClass;
    
public:
    AFortAthenaMutator_Bots();
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawnAthena* SpawnBot(TSubclassOf<AFortPlayerPawnAthena> BotPawnClass, const AActor* InSpawnLocator, const FVector InSpawnLocation, const FRotator InSpawnRotation, const bool bSnapToGround);
    
};

