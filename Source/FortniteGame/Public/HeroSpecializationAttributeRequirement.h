#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "HeroSpecializationAttributeRequirement.generated.h"

USTRUCT(BlueprintType)
struct FHeroSpecializationAttributeRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumValue;
    
    FORTNITEGAME_API FHeroSpecializationAttributeRequirement();
};

