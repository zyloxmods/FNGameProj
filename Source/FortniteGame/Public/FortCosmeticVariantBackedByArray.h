#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariant.h"
#include "FortCosmeticVariantBackedByArray.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCosmeticVariantBackedByArray : public UFortCosmeticVariant {
    GENERATED_BODY()
public:
    UFortCosmeticVariantBackedByArray();
};

