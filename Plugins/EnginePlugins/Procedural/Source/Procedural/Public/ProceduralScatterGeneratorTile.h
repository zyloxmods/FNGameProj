#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProceduralScatter2DPoint.h"
#include "ProceduralScatterGeneratorTile.generated.h"

class UProceduralScatterGenerator;

UCLASS(Blueprintable)
class PROCEDURAL_API UProceduralScatterGeneratorTile : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProceduralScatterGenerator* Generator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProceduralScatter2DPoint> GeneratedPoints;
    
public:
    UProceduralScatterGeneratorTile();
};

