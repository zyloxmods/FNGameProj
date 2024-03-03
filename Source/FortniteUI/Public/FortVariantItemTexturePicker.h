#pragma once
#include "CoreMinimal.h"
#include "FortVariantTileSelector.h"
#include "FortVariantItemTexturePicker.generated.h"

class UFortCosmeticVariant;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class UFortVariantItemTexturePicker : public UFortVariantTileSelector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCosmeticVariant* CachedCosmeticVariant;
    
public:
    UFortVariantItemTexturePicker();
};

