#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "RiverGenerator.generated.h"

class USplineMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class URiverGenerator : public UWaterBodyGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> RiverMesh;
    
public:
    URiverGenerator();
};

