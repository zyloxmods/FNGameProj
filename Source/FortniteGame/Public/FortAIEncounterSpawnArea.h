#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterSpawnLocationManagementMode.h"
#include "EncounterEnvironmentQueryInstance.h"
#include "FortAIEncounterRift.h"
#include "FortAIEncounterSpawnArea.generated.h"

class UFortPathCostEstimator;

USTRUCT(BlueprintType)
struct FFortAIEncounterSpawnArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEncounterEnvironmentQueryInstance> QueryInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIEncounterRift> PendingRifts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIEncounterRift> Rifts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortPathCostEstimator*> PathEstimators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingFallbackQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortEncounterSpawnLocationManagementMode SpawnLocationManagementMode;
    
    FORTNITEGAME_API FFortAIEncounterSpawnArea();
};

