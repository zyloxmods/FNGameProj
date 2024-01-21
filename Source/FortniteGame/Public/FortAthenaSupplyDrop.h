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
class UFortSpectateClickableMapIcon;
class UFortWorldItemDefinition;
class USoundCue;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AFortAthenaSupplyDrop : public ABuildingGameplayActor {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedSpecialActorIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName SpecialActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InStormDespawnTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedInStormDespawnTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSpectateClickableMapIcon* SpectatorMapIcon;
    
public:
    AFortAthenaSupplyDrop();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFortPickup* SpawnPickupFromItemEntry(UFortWorldItemDefinition* ItemDefinition, const FFortItemEntry& InItemEntry, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector Position, FVector Direction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFortPickup* SpawnPickup(UFortWorldItemDefinition* ItemDefinition, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector Position, FVector Direction);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawningLootOnDestruction(AController* EventInstigator);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFortGameModePickup* SpawnGameModePickup(UFortWorldItemDefinition* ItemDefinition, TSubclassOf<AFortGameModePickup> PickupClass, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector Position, FVector Direction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLootTableNameOverride(FName TableNameToUse);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void SendSpawnLootAnalytics(AFortPlayerController* FortPC, const TArray<FFortItemEntry>& ItemsToSpawn) const;
    
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
    void GetSupplyDropSpawnData(float& MinSpawnHeight, float& MaxSpawnHeight);
    
    UFUNCTION(BlueprintCallable)
    FVector FindGroundLocationAt(const FVector& InLocation);
    
};

