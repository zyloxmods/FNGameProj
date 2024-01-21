#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VariantTypeBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEGAME_API UVariantTypeBase : public UObject {
    GENERATED_BODY()
public:
    UVariantTypeBase();
};

