#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayEffectApplicationInfoHard.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FGameplayEffectApplicationInfoHard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    FORTNITEGAME_API FGameplayEffectApplicationInfoHard();
};

