#pragma once
#include "CoreMinimal.h"
#include "BaseSample.h"
#include "UnicornDancePartyInfo.h"
#include "PlayerDancePartySample.generated.h"

USTRUCT(BlueprintType)
struct FPlayerDancePartySample : public FBaseSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnicornDancePartyInfo DancePartyInfo;
    
    FORTNITEGAME_API FPlayerDancePartySample();
};

