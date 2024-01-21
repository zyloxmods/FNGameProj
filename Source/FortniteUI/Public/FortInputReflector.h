#pragma once
#include "CoreMinimal.h"
#include "CommonInputReflector.h"
#include "FortInputReflector.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortInputReflector : public UCommonInputReflector {
    GENERATED_BODY()
public:
    UFortInputReflector();
};

