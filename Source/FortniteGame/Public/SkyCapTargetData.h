#pragma once
#include "CoreMinimal.h"
#include "SkyCapTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSkyCapTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
    FORTNITEGAME_API FSkyCapTargetData();
};

