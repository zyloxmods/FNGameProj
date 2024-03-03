#pragma once
#include "CoreMinimal.h"
#include "FortBotThreatActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortBotThreatActorInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ThreatActor;
    
public:
    FORTNITEGAME_API FFortBotThreatActorInfo();
};

