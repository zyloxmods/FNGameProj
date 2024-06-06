#pragma once
#include "CoreMinimal.h"
#include "AthenaVehicleOverride.h"
#include "FortEventItemDefinitionBase.h"
#include "AthenaSeasonalDecorEvent.generated.h"

class AFortAthenaSupplyDrop;
class UAthenaBattleBusItemDefinition;

UCLASS(Blueprintable)
class UAthenaSeasonalDecorEvent : public UFortEventItemDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAthenaSupplyDrop> SupplyDropOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaVehicleOverride> VehicleOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceBattleBusOverrideEvenIfCosmeticSlotted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaBattleBusItemDefinition* BattleBusOverride;
    
    UAthenaSeasonalDecorEvent(const FObjectInitializer& ObjectInitializer);
};

