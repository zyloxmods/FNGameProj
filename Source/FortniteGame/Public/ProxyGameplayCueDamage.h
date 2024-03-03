#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "ProxyGameplayCueDamage.generated.h"

USTRUCT(BlueprintType)
struct FProxyGameplayCueDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectContextHandle EffectContext;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ProxyGameplayCueDamageMagnitude;
    
public:
    FORTNITEGAME_API FProxyGameplayCueDamage();
};

