#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VariantTypeBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UVariantTypeBase : public UObject {
    GENERATED_BODY()
public:
    UVariantTypeBase();
};

