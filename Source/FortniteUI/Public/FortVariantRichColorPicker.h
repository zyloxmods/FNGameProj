#pragma once
#include "CoreMinimal.h"
#include "FortVariantSelector.h"
#include "FortVariantRichColorPicker.generated.h"

class UFortCosmeticRichColorVariant;

UCLASS(Blueprintable, EditInlineNew)
class UFortVariantRichColorPicker : public UFortVariantSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCosmeticRichColorVariant* CachedCosmeticVariant;
    
    UFortVariantRichColorPicker();
};

