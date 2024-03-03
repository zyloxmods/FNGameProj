#pragma once
#include "CoreMinimal.h"
#include "EFortCombatEvents.h"
#include "CombatEventMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FCombatEventMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCombatEvents CombatEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxContribution;
    
    FORTNITEGAME_API FCombatEventMultiplier();
};

