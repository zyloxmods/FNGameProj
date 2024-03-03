#pragma once
#include "CoreMinimal.h"
#include "GameLogPlayerSampleBase.h"
#include "PlayerMetaInfo.h"
#include "GameLogPlayerMetaSample.generated.h"

USTRUCT(BlueprintType)
struct FGameLogPlayerMetaSample : public FGameLogPlayerSampleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerMetaInfo TheSample;
    
    FORTNITEGAME_API FGameLogPlayerMetaSample();
};

