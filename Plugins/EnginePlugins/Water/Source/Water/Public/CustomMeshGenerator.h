#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "CustomMeshGenerator.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class UCustomMeshGenerator : public UWaterBodyGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
public:
    UCustomMeshGenerator();
};

