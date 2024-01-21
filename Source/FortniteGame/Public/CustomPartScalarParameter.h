#pragma once
#include "CoreMinimal.h"
#include "CustomPartScalarParameter.generated.h"

USTRUCT(BlueprintType)
struct FCustomPartScalarParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndexForScalarParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScalarParameterNameForMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalarOverride;
    
    FORTNITEGAME_API FCustomPartScalarParameter();
};

