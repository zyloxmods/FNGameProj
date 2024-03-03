#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AthenaAIService.h"
#include "CachedSupplyDrop.h"
#include "EAthenaGamePhaseStep.h"
#include "MovingLootInfo.h"
#include "Templates/SubclassOf.h"
#include "AthenaAIServiceLoot.generated.h"

class ABuildingProp;
class AFortPickup;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UDataTable;
class UFortWorldItem;

UCLASS(Blueprintable)
class UAthenaAIServiceLoot : public UAthenaAIService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropStatusUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RemoveInvalidChestFromOctreeProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MovingLootTrackingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MovingLootUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MovingLootOctreeUpdateDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingProp>> HarvestableActorClassList;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AFortPickup>, FMovingLootInfo> MovingLoots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCachedSupplyDrop> CachedSupplyDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItem* CachedWorldItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BotBuildingContainerBlacklistDataTable;
    
public:
    UAthenaAIServiceLoot();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSupplyDropStatus();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMovingLoots();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
};

