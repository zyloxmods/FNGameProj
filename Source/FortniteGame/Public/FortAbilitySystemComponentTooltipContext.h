#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "AttributeSet.h"
#include "FortTooltipContext.h"
#include "FortAbilitySystemComponentTooltipContext.generated.h"

class UFortAbilitySystemComponentTooltipContext;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAbilitySystemComponentTooltipContext : public UFortTooltipContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle ActiveGEHandle;
    
    UFortAbilitySystemComponentTooltipContext();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UFortAbilitySystemComponentTooltipContext* SpawnAbilitySystemTooltipContextFromOtherContext(const UFortTooltipContext* OtherContext);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UFortAbilitySystemComponentTooltipContext* SpawnAbilitySystemTooltipContext();
    
};

