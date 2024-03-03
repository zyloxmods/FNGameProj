#pragma once
#include "CoreMinimal.h"
#include "BuildingProp_AISpawner.h"
#include "Templates/SubclassOf.h"
#include "BuildingProp_DeimosSpawner.generated.h"

class AAthenaCreativeRift;
class AController;
class UEnvQuery;
class UFortDifficultyOptionEncounter_PawnNumberCap;
class UFortDifficultyOptionEncounter_SpawnGroupProgression;
class UFortDifficultyOptionEncounter_SpawnLimitPawns;
class UFortDifficultyOptionEncounter_SpawnTiming;
class UFortGameplayReceiverMessageComponent;

UCLASS(Blueprintable)
class ABuildingProp_DeimosSpawner : public ABuildingProp_AISpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AAthenaCreativeRift>> DeimosSpawnerOptions;
    
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
    bool bNoSpawnLimitEnabled;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledOnMinigameStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayReceiverMessageComponent* TurnOnReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayReceiverMessageComponent* TurnOffReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayReceiverMessageComponent* KillAllAIReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayReceiverMessageComponent* KillSpawnerReceiverComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCreativeCreatureSpawners;
    
public:
    ABuildingProp_DeimosSpawner();
private:
    UFUNCTION(BlueprintCallable)
    void OnTurnOnReceived(AController* TriggerInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnTurnOffReceived(AController* TriggerInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnKillRiftReceived(AController* TriggerInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnKillAIReceived(AController* TriggerInstigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MinigameStarted();
    
};

