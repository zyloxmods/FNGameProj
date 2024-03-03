#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "BuildingGameplayActor.h"
#include "FortItemEntry.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaSupplyDrop.generated.h"

class AController;
class AFortGameModePickup;
class AFortPawn;
class AFortPickup;
class AFortPlayerController;
class UAudioComponent;
class UFortSpectateClickableMapIcon;
class UFortWorldItemDefinition;
class USoundCue;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortAthenaSupplyDrop : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName GroundCollsionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* WaveSpawnSoundCue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LootTableNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult LastGroundLocationHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SearchingSoundCueLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateLongUseNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedSpecialActorIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName SpecialActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InStormDespawnTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedInStormDespawnTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* LongInteractAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSpectateClickableMapIcon* SpectatorMapIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NumPlayersInteracting, meta=(AllowPrivateAccess=true))
    int32 NumPlayersInteracting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisualizePlayerInteractionChanges;
    
public:
    AFortAthenaSupplyDrop();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFortPickup* SpawnPickupFromItemEntry(UFortWorldItemDefinition* ItemDefinition, const FFortItemEntry& InItemEntry, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector position, FVector Direction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFortPickup* SpawnPickup(UFortWorldItemDefinition* ItemDefinition, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector position, FVector Direction);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawningLootOnDestruction(AController* EventInstigator);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFortGameModePickup* SpawnGameModePickup(UFortWorldItemDefinition* ItemDefinition, TSubclassOf<AFortGameModePickup> PickupClass, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector position, FVector Direction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLootTableNameOverride(FName TableNameToUse);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void SendSpawnLootAnalytics(AFortPlayerController* FortPC, const TArray<FFortItemEntry>& ItemsToSpawn) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NumPlayersInteracting();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnLootSpawned();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDespawnDueToStorm();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCheckForBeingInStorm();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAReplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GroundTrace(const FVector& TraceStart, const FVector& TraceEnd, FHitResult& OutHit) const;
    
    UFUNCTION(BlueprintCallable)
    void GetSupplyDropSpeedData(float& MinSpeed, float& MaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void GetSupplyDropSpawnData(float& MinSpawnHeight, float& MaxSpawnHeight);
    
    UFUNCTION(BlueprintCallable)
    FVector FindGroundLocationAt(const FVector& InLocation);
    
};

