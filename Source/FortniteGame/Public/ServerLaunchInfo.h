#pragma once
#include "CoreMinimal.h"
#include "ServerLaunchInfo.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FServerLaunchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* LaunchedPawn;
    
    FORTNITEGAME_API FServerLaunchInfo();
};

