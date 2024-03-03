#pragma once
#include "CoreMinimal.h"
#include "MaterialVariants.h"
#include "VariantTypeBase.h"
#include "VariantTypeMaterials.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVariantTypeMaterials : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialVariants> VariantMaterials;
    
    UVariantTypeMaterials();
};

