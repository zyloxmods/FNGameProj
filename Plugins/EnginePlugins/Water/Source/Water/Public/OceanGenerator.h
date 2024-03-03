#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "OceanGenerator.generated.h"

class UOceanBoxCollisionComponent;
class UOceanCollisionComponent;

UCLASS(Blueprintable)
class UOceanGenerator : public UWaterBodyGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<UOceanBoxCollisionComponent*> CollisionBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<UOceanCollisionComponent*> CollisionHullSets;
    
public:
    UOceanGenerator();
};

