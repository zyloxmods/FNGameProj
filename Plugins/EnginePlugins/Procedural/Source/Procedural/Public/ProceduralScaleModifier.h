#pragma once
#include "CoreMinimal.h"
#include "ProceduralParameterModifier.h"
#include "ProceduralScaleModifier.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralScaleModifier : public UProceduralParameterModifier {
    GENERATED_BODY()
public:
    UProceduralScaleModifier();
};

