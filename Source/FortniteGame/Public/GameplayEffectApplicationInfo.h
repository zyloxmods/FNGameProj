#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectApplicationInfo.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FGameplayEffectApplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    FORTNITEGAME_API FGameplayEffectApplicationInfo();
};

