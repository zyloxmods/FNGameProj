#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EClampType.h"
#include "AttributeClamp.generated.h"

USTRUCT(BlueprintType)
struct FAttributeClamp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClampType ClampType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampValue;
    
    FORTNITEGAME_API FAttributeClamp();
};

