#pragma once
#include "CoreMinimal.h"
#include "ProceduralParameterModifier.h"
#include "ProceduralRotationModifier.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralRotationModifier : public UProceduralParameterModifier {
    GENERATED_BODY()
public:
    UProceduralRotationModifier();
};

