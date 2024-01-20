#pragma once
#include "CoreMinimal.h"
#include "CollectorTrackedData.generated.h"

class AFortPlayerState;

USTRUCT(BlueprintType)
struct FCollectorTrackedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* Player;
    
    FORTNITEGAME_API FCollectorTrackedData();
};

