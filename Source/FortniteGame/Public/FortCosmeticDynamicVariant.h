#pragma once
#include "CoreMinimal.h"
#include "DynamicVariantDef.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "FortCosmeticDynamicVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticDynamicVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, TitleProperty="VariantName"))
    TArray<FDynamicVariantDef> DynamicOptions;
    
public:
    UFortCosmeticDynamicVariant();
};

