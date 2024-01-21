#pragma once
#include "CoreMinimal.h"
#include "ServerLaunchInfo.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FServerLaunchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* LaunchedPawn;
    
    FServerLaunchInfo();
};

