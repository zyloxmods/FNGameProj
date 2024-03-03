#pragma once
#include "CoreMinimal.h"
#include "ProceduralGeneratorContext.h"
#include "ProceduralScatterProjectionPoint.h"
#include "ScatteredPointCloud.h"
#include "SourcePointGenerator.h"
#include "ProceduralScatterGeneratorContext.generated.h"

class UMaterialInstanceDynamic;
class UProceduralPointCloud;
class UProceduralScatterGeneratorTile;

UCLASS(Blueprintable)
class UProceduralScatterGeneratorContext : public UProceduralGeneratorContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    FScatteredPointCloud ScatteredPointCloud;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TArray<UProceduralScatterGeneratorTile*> UniqueTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSourcePointGenerator> SourcePointGenerators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TArray<FProceduralScatterProjectionPoint> ProjectionPointCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    UProceduralPointCloud* SourcePointCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    UProceduralPointCloud* BlockerPointCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProjectionVectorMaterial;
    
public:
    UProceduralScatterGeneratorContext();
};

