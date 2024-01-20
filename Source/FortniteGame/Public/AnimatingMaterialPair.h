#pragma once
#include "CoreMinimal.h"
#include "AnimatingMaterialPair.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FAnimatingMaterialPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Original;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Override;
    
    FORTNITEGAME_API FAnimatingMaterialPair();
};

