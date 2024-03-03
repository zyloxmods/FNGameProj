#pragma once
#include "CoreMinimal.h"
#include "GameLogPlayerSampleBase.h"
#include "PlayerDancePartySample.h"
#include "GameLogDancePartySample.generated.h"

USTRUCT(BlueprintType)
struct FGameLogDancePartySample : public FGameLogPlayerSampleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDancePartySample TheSample;
    
    FORTNITEGAME_API FGameLogDancePartySample();
};

