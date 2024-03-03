#pragma once
#include "CoreMinimal.h"
#include "ProceduralParameterModifier.h"
#include "ProceduralDensityModifier.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UProceduralDensityModifier : public UProceduralParameterModifier {
    GENERATED_BODY()
public:
    UProceduralDensityModifier();
};

