#pragma once
#include "CoreMinimal.h"
#include "FortMaterialsPriorToOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FFortMaterialsPriorToOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OwnedMaterials_AssumeExternalOrder;
    
    FORTNITEGAME_API FFortMaterialsPriorToOverride();
};

