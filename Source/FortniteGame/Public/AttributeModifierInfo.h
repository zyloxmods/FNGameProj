#pragma once
#include "CoreMinimal.h"
#include "AttributeModifierInfo.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FAttributeModifierInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayEffect* InstantGEs;
    
    FORTNITEGAME_API FAttributeModifierInfo();
};

