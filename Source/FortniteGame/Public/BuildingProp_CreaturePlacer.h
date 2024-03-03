#pragma once
#include "CoreMinimal.h"
#include "BuildingProp_AISpawner.h"
#include "EFortMinigameState.h"
#include "OnCreatureVisualsLoadCompleteDelegate.h"
#include "SpawnGroupVisuals.h"
#include "BuildingProp_CreaturePlacer.generated.h"

class AController;
class AFortMinigame;
class UFortDifficultyOptionEncounter_SpawnGroupProgression;
class UFortDifficultyOptionEncounter_SpawnLimitPawns;
class UFortGameplayReceiverMessageComponent;
class UFortGameplayTriggerMessageComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABuildingProp_CreaturePlacer : public ABuildingProp_AISpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMinigameState CurrentMinigameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnGroupVisuals> SpawnGroupVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnGroupProgression> SelectedSpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortDifficultyOptionEncounter_SpawnLimitPawns> SelectedSpawnLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledOnGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyPreviousOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMinigameState GameStateEnable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreatureVisualsLoadComplete OnCreatureVisualsLoadComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreatureVisualsDoneLoading;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayReceiverMessageComponent* TurnOnReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayReceiverMessageComponent* TurnOffReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayTriggerMessageComponent* CreatureKilledTransmitComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCreativeCreatureSpawners;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CreatureSkeletalMeshComponent;
    
public:
    ABuildingProp_CreaturePlacer();
    UFUNCTION(BlueprintCallable)
    void UpdateCreatureVisuals();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTurnOnReceived(AController* TriggerInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnTurnOffReceived(AController* TriggerInstigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState NewMinigameState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetCreatureSkeletalMeshComponent() const;
    
};

