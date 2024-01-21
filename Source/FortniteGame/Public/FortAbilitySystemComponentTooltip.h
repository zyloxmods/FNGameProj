#pragma once
#include "CoreMinimal.h"
#include "FortTooltip.h"
#include "FortAbilitySystemComponentTooltip.generated.h"

class UFortTooltipContext;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAbilitySystemComponentTooltip : public UFortTooltip {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTooltipContext* CachedContext;
    
public:
    UFortAbilitySystemComponentTooltip();
};

