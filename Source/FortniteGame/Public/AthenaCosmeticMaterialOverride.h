#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FAthenaCosmeticMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialOverrideIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
    
    FORTNITEGAME_API FAthenaCosmeticMaterialOverride();
};

