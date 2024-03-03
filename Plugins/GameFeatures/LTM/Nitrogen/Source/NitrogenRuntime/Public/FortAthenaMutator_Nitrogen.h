#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaCompassIcon.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "FortSquadStartSearchParamData.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ENitrogenGamePhase.h"
#include "NitrogenMapIcon.h"
#include "NitrogenMapPlacementIcon.h"
#include "NitrogenPOICombinationMap.h"
#include "NitrogenPOITraversePoints.h"
#include "NitrogenPickupCashbagData.h"
#include "NitrogenPickupItemToDropOnDeath.h"
#include "NitrogenPlayerGameplayAbilityOption.h"
#include "NitrogenTeamData.h"
#include "NitrogenVehicle.h"
#include "OnFareEventWidgetAvailableDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Nitrogen.generated.h"

class AActor;
class AFortAthenaMutator_GameStartCountdown;
class AFortAthenaMutator_InventoryOverride;
class AFortAthenaMutator_SynchronizedTeleport;
class AFortAthenaVehicle;
class AFortPlayerControllerAthena;
class AFortPlayerStateAthena;
class AFortSquadStart;
class ANavArrow;
class ANitrogenFare;
class ANitrogenTraversePoint;
class UGameplayEffect;
class UNitrogenPlayerComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Nitrogen : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFareEventWidgetAvailable OnFareEventWidgetAvailable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayerSpecialActorTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PassengerSpecialActorTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VehicleSpecialActorTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNitrogenPOICombinationMap> NitrogenPOICombinationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MatchStartVehicleCleanupTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MatchNearEndScoreRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNitrogenPlayerComponent> NitrogenPlayerComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNitrogenPlayerGameplayAbilityOption> PlayerGameplayAbilityOptionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNitrogenPickupItemToDropOnDeath> PickupItemsToDropOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VehicleInteractionAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisallowedDamageTagsInSameVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAllowRedeployGliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StormShieldRadiusCalculationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StormShieldRadiusOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FVector> OverridePOILocationsByTagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId NitrogenVehicleAssetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VehicleSpawnZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANavArrow> NavArrowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumOfExtraVehiclesToMaintain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ExplosionDamageMultiplierGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSquadStartSearchParamData SquadStartSearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RemoveLoadingScreenFailsafeTimerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSquadStartSearchParamData RespawnPointSearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RespawnPointCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VehicleOverlapCheckBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinTeleportHeightAboveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeleportingPlayersText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANitrogenFare> NitrogenFareClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANitrogenTraversePoint> PickUpTraversePointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANitrogenTraversePoint> DropOffTraversePointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAllowSharedDropOffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumDistanceBetweenPickupPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bUseFarePortraitTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumOfTopTeamsToShowOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNitrogenMapPlacementIcon> PlacementBasedMapIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenMapIcon PickUpPointMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenMapIcon DropOffPointMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenMapIcon VehicleMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumOfFaresToShowOnCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumOfVehiclesToShowOnCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaCompassIcon FareCompassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaCompassIcon DropOffPointCompassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaCompassIcon VehicleCompassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DropOffWidgetActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> NearbyVehicleWidgetActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSquadStartSearchParamData PickupCashbagSearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CashbagSelectedPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FNitrogenPickupCashbagData> CashbagDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PassengerDespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PlayerSpecialActorRepInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NitrogenVehicleTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NitrogenGamePhase, meta=(AllowPrivateAccess=true))
    ENitrogenGamePhase NitrogenGamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SortedTeamDataByScore, meta=(AllowPrivateAccess=true))
    TArray<FNitrogenTeamData> SortedTeamDataByScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> CacheLeadingReplicatedPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* NitrogenVehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FNitrogenVehicle> NitrogenVehiclesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortSquadStart*> NitrogenSquadStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_GameStartCountdown* GameStartCountdownMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_InventoryOverride* InventoryMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FNitrogenPOITraversePoints> UnassignedPickupPointsPerPOIMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FNitrogenPOITraversePoints> UnassignedPOIBasedDropoffPointsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANitrogenTraversePoint*> UnassignedDistanceBasedDropoffPointsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavArrow* ClientNavArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentFares, meta=(AllowPrivateAccess=true))
    TArray<ANitrogenFare*> CurrentFares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<ANitrogenFare*> CurrentActiveFares;
    
public:
    AFortAthenaMutator_Nitrogen();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SortedTeamDataByScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NitrogenGamePhase();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentFares();
    
    UFUNCTION(BlueprintCallable)
    void OnNitrogenVehiclePlayerExit(const AFortPlayerControllerAthena* PlayerController, AFortAthenaVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnNitrogenVehicleDriverChanged(const AFortPlayerControllerAthena* NewController, AFortAthenaVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnNitrogenVehicleDestroyed(AActor* VehicleDestroyed);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerTeleportComplete(AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandleGroupTeleportComplete();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStartCountdownEnd();
    
};

