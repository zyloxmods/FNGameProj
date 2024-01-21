#pragma once
#include "CoreMinimal.h"
#include "MaterialParamName.h"
#include "MaterialFloatVariant.generated.h"

USTRUCT(BlueprintType)
struct FMaterialFloatVariant : public FMaterialParamName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FORTNITEGAME_API FMaterialFloatVariant();
};

