#pragma once
#include "CoreMinimal.h"
#include "FortAlterationItemDefinition.h"
#include "CosmeticOnlyAlterationItemDefinition.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, MinimalAPI)
class UCosmeticOnlyAlterationItemDefinition : public UFortAlterationItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> VehicleWrapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> VehicleWrapMaterial_Masked;
    
public:
    UCosmeticOnlyAlterationItemDefinition();
};

