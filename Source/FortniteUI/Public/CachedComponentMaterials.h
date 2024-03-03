#pragma once
#include "CoreMinimal.h"
#include "CachedComponentMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCachedComponentMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterials;
    
    FORTNITEUI_API FCachedComponentMaterials();
};

