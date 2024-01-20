#pragma once
#include "CoreMinimal.h"
#include "EFortCombatEvents.h"
#include "FortCombatManagerEvent.generated.h"

USTRUCT(BlueprintType)
struct FFortCombatManagerEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCombatEvents Event;
    
    FORTNITEGAME_API FFortCombatManagerEvent();
};

