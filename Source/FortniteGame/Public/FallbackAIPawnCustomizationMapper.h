#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FallbackAIPawnCustomizationMapper.generated.h"

class UFortAIPawnCustomizationDefinition;

USTRUCT(BlueprintType)
struct FFallbackAIPawnCustomizationMapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAIPawnCustomizationDefinition> CustomizationFallback;
    
    FORTNITEGAME_API FFallbackAIPawnCustomizationMapper();
};

