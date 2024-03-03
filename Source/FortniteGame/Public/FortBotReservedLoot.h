#pragma once
#include "CoreMinimal.h"
#include "FortBotReservedLoot.generated.h"

class AFortAthenaAIBotController;

USTRUCT(BlueprintType)
struct FFortBotReservedLoot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 LootId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* Owner;
    
    FORTNITEGAME_API FFortBotReservedLoot();
};

