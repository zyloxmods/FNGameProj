#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplayVideoManager.generated.h"

class UPegasusGameEventCollector;

UCLASS(Blueprintable, Within=FortGameInstance)
class UReplayVideoManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPegasusGameEventCollector* ActiveTimelineCollector;
    
public:
    UReplayVideoManager();
};

