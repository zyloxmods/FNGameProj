#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HeartbeatManager.generated.h"

class UFortAnalyticsClientEngagementsManager;

UCLASS(Blueprintable, Config=Game)
class UHeartbeatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTrackLocation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackLocationFrequencySec;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSendPerMinuteResourceAndDamageEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSendPerMinuteVehicleEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAnalyticsClientEngagementsManager* AnalyticsClientEngagementsManager;
    
public:
    UHeartbeatManager();
};

