#pragma once
#include "CoreMinimal.h"
#include "GameLogPlayerSampleBase.h"
#include "PawnSample.h"
#include "GameLogPawnSample.generated.h"

USTRUCT(BlueprintType)
struct FGameLogPawnSample : public FGameLogPlayerSampleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnSample TheSample;
    
    FORTNITEGAME_API FGameLogPawnSample();
};

