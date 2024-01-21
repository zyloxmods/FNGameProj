#pragma once
#include "CoreMinimal.h"
#include "FortServerBotInfo.generated.h"

class AFortAthenaAIBotController;

USTRUCT(BlueprintType)
struct FFortServerBotInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* BotController;
    
public:
    FORTNITEGAME_API FFortServerBotInfo();
};

