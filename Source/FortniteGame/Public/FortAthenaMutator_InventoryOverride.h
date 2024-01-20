#pragma once
#include "CoreMinimal.h"
#include "EAthenaInventorySpawnOverride.h"
#include "EAthenaLootDropOverride.h"
#include "FortAthenaMutator.h"
#include "ItemLoadoutContainer.h"
#include "ItemLoadoutTeamMap.h"
#include "FortAthenaMutator_InventoryOverride.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_InventoryOverride : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaLootDropOverride DropAllItemsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaLootDropOverride TrapDropOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaLootDropOverride WeaponDropOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaLootDropOverride MaterialDropOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaLootDropOverride GadgetDropOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaLootDropOverride ConsumableDropOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaLootDropOverride AmmoDropOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaInventorySpawnOverride InventoryUpdateOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemLoadoutContainer> InventoryLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InventoryLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemLoadoutTeamMap> TeamLoadouts;
    
public:
    AFortAthenaMutator_InventoryOverride();
};

