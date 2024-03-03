#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CurveTable.h"
#include "BuildingTimeOfDayLights.h"
#include "ChosenQuotaInfo.h"
#include "EFortRarity.h"
#include "EFortSoundIndicatorTypes.h"
#include "FortSearchBounceData.h"
#include "LootTierGroupTagOverride.h"
#include "RandomUpgradeData.h"
#include "BuildingContainer.generated.h"

class AFortPlayerPawn;
class UAudioComponent;
class UCurveFloat;
class UFortWorldItemDefinition;
class UMaterialInterface;
class USoundCue;
class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI)
class ABuildingContainer : public ABuildingTimeOfDayLights {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SearchingSoundCueLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* LootRepeatSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnDamageSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnDeathSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UStaticMesh* SearchedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> SearchedMaterialOverrides;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootTierGroupTagOverride> LootTierGroupTagOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SearchLootTierGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomUpgradeData> PotentialRandomUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChosenQuotaInfo SearchLootTierChosenQuotaInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ContainerLootTierKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LootTier, meta=(AllowPrivateAccess=true))
    int32 ReplicatedLootTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChosenRandomUpgrade, meta=(AllowPrivateAccess=true))
    int32 ChosenRandomUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSpawnedActor: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NumItemsToDropRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchBounceRadiusOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* LootTestingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootNoiseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LootSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LootFinalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InstancedLoot_TossDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstancedLoot_TossSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstancedLoot_TossConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LootSpawnLocation_Athena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LootTossDirection_Athena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootTossSpeed_Athena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootTossConeHalfAngle_Athena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortRarity HighestRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLootProperties_Athena: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysShowContainer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysMaintainLoot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyContainerOnSearch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceHidePickupMinimapIndicator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceSpawnLootOnDestruction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceTossLootOnSpawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bAlreadySearched, meta=(AllowPrivateAccess=true))
    uint8 bAlreadySearched: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoNotDropLootOnDestruction: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bBuriedTreasure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bHasRaisedTreasure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartAlreadySearched_Athena: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bRegenerateLoot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLocationForDrop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootedWeaponsDurabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=BounceContainer, meta=(AllowPrivateAccess=true))
    FFortSearchBounceData SearchBounceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle SearchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SearchText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioIndicator_Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurrentInteractBounceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurrentInteractBounceNormalCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SavedReservedRandomValueResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeUntilLootRegenerates;
    
public:
    ABuildingContainer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAudiovisualIndicator();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartAudiovisualIndicator(UAudioComponent* ForComponent, EFortSoundIndicatorTypes Type, float Interval);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSearchLootTierGroup(FName InSearchLootTierGroup);
    
    UFUNCTION(BlueprintCallable)
    void RaiseTreasure();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSearched();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSearchInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LootTier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChosenRandomUpgrade();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bAlreadySearched();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRaiseTreasure();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLootReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLootRepeat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginSearch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAuthorityRandomUpgradeApplied(const FName UpgradeTierGroup);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLootTier();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableBacchusHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableBacchusHighlight();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool BP_SpawnLoot(AFortPlayerPawn* PlayerPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void BounceContainer();
    
};

