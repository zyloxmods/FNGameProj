#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KairosHeartbeatManager.generated.h"

class UFortLocalPlayer;

UCLASS(Blueprintable, Config=Game)
class UKairosHeartbeatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* FLP;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeartbeatInterval;
    
public:
    UKairosHeartbeatManager();
};

