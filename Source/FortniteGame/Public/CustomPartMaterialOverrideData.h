#pragma once
#include "CoreMinimal.h"
#include "CustomPartMaterialOverrideData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCustomPartMaterialOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialOverrideIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
    
    FORTNITEGAME_API FCustomPartMaterialOverrideData();
};

