#pragma once
#include "CoreMinimal.h"
#include "DynamicVariantDef.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "FortCosmeticDynamicVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortCosmeticDynamicVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicVariantDef> DynamicOptions;
    
public:
    UFortCosmeticDynamicVariant();
};

