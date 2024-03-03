#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPlayerSurveyCMSTracker.generated.h"

class UFortLocalPlayer;
class UFortMcpProfileCommonCore;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortPlayerSurveyCMSTracker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCommonCore* McpProfile;
    
public:
    UFortPlayerSurveyCMSTracker();
};

