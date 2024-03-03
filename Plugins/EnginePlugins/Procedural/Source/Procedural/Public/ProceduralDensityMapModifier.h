#pragma once
#include "CoreMinimal.h"
#include "ProceduralDensityModifier.h"
#include "ProceduralDensityMapModifier.generated.h"

class UProceduralFloatDataMap;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralDensityMapModifier : public UProceduralDensityModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralFloatDataMap* Map;
    
    UProceduralDensityMapModifier();
};

