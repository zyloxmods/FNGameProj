#pragma once
#include "CoreMinimal.h"
#include "BuildEvent.h"
#include "GameLogPlayerSampleBase.h"
#include "GameLogBuildSample.generated.h"

USTRUCT(BlueprintType)
struct FGameLogBuildSample : public FGameLogPlayerSampleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildEvent TheSample;
    
    FORTNITEGAME_API FGameLogBuildSample();
};

