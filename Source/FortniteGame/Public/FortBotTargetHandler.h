#pragma once
#include "CoreMinimal.h"
#include "FortBotTargetInfo.h"
#include "FortBotTargetHandler.generated.h"

USTRUCT(BlueprintType)
struct FFortBotTargetHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortBotTargetInfo> Targets;
    
public:
    FORTNITEGAME_API FFortBotTargetHandler();
};

