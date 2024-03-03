#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "CobaltCombatStormShieldDataEntry.h"
#include "CobaltCombatStormShieldArray.generated.h"

USTRUCT(BlueprintType)
struct FCobaltCombatStormShieldArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCobaltCombatStormShieldDataEntry> Entries;
    
    FORTNITEGAME_API FCobaltCombatStormShieldArray();
};

