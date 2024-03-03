#pragma once
#include "CoreMinimal.h"
#include "ProceduralParameterModifier.h"
#include "ProceduralContentVariationsWeightsModifier.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UProceduralContentVariationsWeightsModifier : public UProceduralParameterModifier {
    GENERATED_BODY()
public:
    UProceduralContentVariationsWeightsModifier();
};

