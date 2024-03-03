#pragma once
#include "CoreMinimal.h"
#include "MaterialParamterDef.h"
#include "VariantTypeBase.h"
#include "VariantTypeMaterialParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVariantTypeMaterialParams : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParamterDef> VariantMaterialParams;
    
    UVariantTypeMaterialParams();
};

