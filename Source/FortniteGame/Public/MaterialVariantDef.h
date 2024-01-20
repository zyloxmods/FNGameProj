#pragma once
#include "CoreMinimal.h"
#include "BaseVariantDef.h"
#include "MaterialParamterDef.h"
#include "MaterialVariants.h"
#include "MaterialVariantDef.generated.h"

USTRUCT(BlueprintType)
struct FMaterialVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialVariants> VariantMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParamterDef> VariantMaterialParams;
    
    FORTNITEGAME_API FMaterialVariantDef();
};

