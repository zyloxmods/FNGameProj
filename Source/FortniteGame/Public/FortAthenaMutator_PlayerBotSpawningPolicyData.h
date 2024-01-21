#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_SpawningPolicyData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_PlayerBotSpawningPolicyData.generated.h"

class AFortGameModeAthena;
class AFortPlayerPawnAthena;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaMutator_PlayerBotSpawningPolicyData : public UFortAthenaMutator_SpawningPolicyData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayerPawnAthena> PlayerBotPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CachedGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTraceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTraceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelay;
    
public:
    UFortAthenaMutator_PlayerBotSpawningPolicyData();
};

