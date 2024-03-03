#pragma once
#include "CoreMinimal.h"
#include "CaptureAreaTeamInfo.generated.h"

class AFortPlayerController;

USTRUCT(BlueprintType)
struct FCaptureAreaTeamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerController*> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InsideTeamIndex;
    
    FORTNITEGAME_API FCaptureAreaTeamInfo();
};

