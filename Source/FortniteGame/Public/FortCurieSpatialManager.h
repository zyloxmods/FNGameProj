#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCurieBuildingGrid.h"
#include "FortCurieElementSpatialGrid.h"
#include "FortCurieGrassGrid.h"
#include "FortCurieSpatialManagerTickFunction.h"
#include "FortCurieSpatialManager.generated.h"

class UBuildingStructuralSupportSystem;
class UFoliageType;
class UPhysicalMaterial;

UCLASS(Blueprintable, Config=Game)
class UFortCurieSpatialManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapFireApplicationMagnitude;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapFireApplicationMaxMagnitude;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFoliageType>> GrassFoliageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFoliageType*> GrassFoliageTypePtrs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPhysicalMaterial>> IgnitablePhysicalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> IgnitablePhysicalMaterialPtrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieSpatialManagerTickFunction PrimaryTickFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieBuildingGrid CurieBuildingGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieElementSpatialGrid ElementSpatialGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieGrassGrid GrassGrid;
    
public:
    UFortCurieSpatialManager();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBuildingGridInitialized(UBuildingStructuralSupportSystem* StructuralSupportSystem);
    
};

