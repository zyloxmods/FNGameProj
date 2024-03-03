#pragma once
#include "CoreMinimal.h"
#include "VehicleCosmeticInfo.generated.h"

class ACustomItemWrapModifier;
class AFortPlayerPawn;
class UAthenaItemWrapDefinition;
class UAthenaVehicleCosmeticItemDefinition;
class USceneComponent;

USTRUCT(BlueprintType)
struct FVehicleCosmeticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* MostRecentCosmeticSourcePawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaVehicleCosmeticItemDefinition* ActiveCosmeticItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PawnAssociatedWithWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaItemWrapDefinition* ActiveCosmeticWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> SpawnedCosmeticComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACustomItemWrapModifier* ItemWrapModifier;
    
    FORTNITEGAME_API FVehicleCosmeticInfo();
};

