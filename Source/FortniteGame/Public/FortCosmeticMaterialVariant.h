#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "MaterialVariantDef.h"
#include "FortCosmeticMaterialVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortCosmeticMaterialVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialVariantDef> MaterialOptions;
    
public:
    UFortCosmeticMaterialVariant();
};

