#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingProp.h"
#include "Templates/SubclassOf.h"
#include "BuildingProp_DeimosSpawner.generated.h"

class AAthenaCreativeRift;
class ABuildingRift;
class UEnvQuery;
class UFortCreativeCreatureManagerComponent;
class UFortDifficultyOptionEncounter_PawnNumberCap;
class UFortDifficultyOptionEncounter_SpawnGroupProgression;
class UFortDifficultyOptionEncounter_SpawnLimitPawns;
class UFortDifficultyOptionEncounter_SpawnTiming;
class UFortMinigameProgressComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI, Config = Game)
class ABuildingProp_DeimosSpawner : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAthenaCreativeRift> DeimosSpawnerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UFortDifficultyOptionEncounter_PawnNumberCap>> PawnNumberCapOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnGroupProgression>> SpawnGroupOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnTiming>> SpawnTimingOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnLimitPawns>> SpawnLimitOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UEnvQuery>> EQSQueryOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_PawnNumberCap> SelectedPawnNumberCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnGroupProgression> SelectedSpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnTiming> SelectedSpawnTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnLimitPawns> SelectedSpawnLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnvQuery> SelectedEQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivationRangeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoSpawnLimitEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDistanceToAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnRangeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageBuildingsOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideQueryRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortSlotsByBestScore;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMinigameProgressComponent* MinigameProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeCreatureManagerComponent* CreatureManagerComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaCreativeRift* CachedDeimosSpawner;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCreativeCreatureSpawners;
    
public:
    ABuildingProp_DeimosSpawner();
    UFUNCTION(BlueprintCallable)
    void SpawnRift(FVector SpawnPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnLocation(USceneComponent* NewSpawnLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedRift(ABuildingRift* SpawnedRift);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MinigameStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MinigameEnded();
    
    UFUNCTION(BlueprintCallable)
    void AdjustCollisionOfStaticMesh(bool bIgnore, UStaticMeshComponent* Mesh);
    
};

