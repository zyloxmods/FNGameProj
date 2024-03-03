#pragma once
#include "CoreMinimal.h"
#include "FortServerBotInfo.generated.h"

class AFortAthenaAIBotController;
class AFortPoiVolume;

USTRUCT(BlueprintType)
struct FFortServerBotInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* BotController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPoiVolume* SelectedPoiVolume;
    
public:
    FORTNITEGAME_API FFortServerBotInfo();
};

