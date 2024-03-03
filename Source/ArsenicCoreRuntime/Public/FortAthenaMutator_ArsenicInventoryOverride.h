#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator_InventoryOverride.h"
#include "ItemLoadoutContainer.h"
#include "FortAthenaMutator_ArsenicInventoryOverride.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_ArsenicInventoryOverride : public AFortAthenaMutator_InventoryOverride {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemLoadoutContainer> PostSkyDiveInventoryLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemLoadoutContainer> ParachuteDisabledInventoryLoadout;
    
public:
    AFortAthenaMutator_ArsenicInventoryOverride();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
};

