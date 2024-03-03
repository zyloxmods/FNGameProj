#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InitialGameplayEffectInfo.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FInitialGameplayEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    FORTNITEGAME_API FInitialGameplayEffectInfo();
};

