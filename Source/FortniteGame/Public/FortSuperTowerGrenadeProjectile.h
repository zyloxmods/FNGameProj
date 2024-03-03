#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortProjectileBase.h"
#include "FortSuperTowerGrenadeProjectile.generated.h"

class AActor;
class UBuildingStructuralSupportSystem;

UCLASS(Abstract, Blueprintable)
class AFortSuperTowerGrenadeProjectile : public AFortProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BuildingActorsToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BuildingActorsToIgnore;
    
    AFortSuperTowerGrenadeProjectile();
    UFUNCTION(BlueprintCallable)
    void DestroyActorsInGridCellLocation(UBuildingStructuralSupportSystem* BuildingStructuralSupportSystem, const FVector& CellLocation, bool bDestroyFloorsQuickly);
    
    UFUNCTION(BlueprintCallable)
    void ClearGridCells(const TArray<FVector>& GridCellsToClear, bool bDestroyFloorsQuickly, const FVector& BaseDestination, float AngleDeg);
    
};

