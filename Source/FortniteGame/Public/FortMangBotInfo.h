#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EAlertLevel.h"
#include "FortMangBotInfo.generated.h"

class AFortAthenaAIBotController;
class AFortPawn;

USTRUCT(BlueprintType)
struct FFortMangBotInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* BotController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* BotPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertLevel CurrentBotAlertLevel;
    
    FORTNITEGAME_API FFortMangBotInfo();
};

