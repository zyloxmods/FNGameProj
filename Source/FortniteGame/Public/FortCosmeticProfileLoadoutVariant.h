#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "LoadoutVariantDef.h"
#include "FortCosmeticProfileLoadoutVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticProfileLoadoutVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, TitleProperty="VariantName"))
    TArray<FLoadoutVariantDef> LoadoutAugmentations;
    
public:
    UFortCosmeticProfileLoadoutVariant();
};

