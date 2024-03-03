#pragma once
#include "CoreMinimal.h"
#include "FortTimedKeysState.generated.h"

USTRUCT(BlueprintType)
struct FFortTimedKeysState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> K;
    
    FORTNITEGAME_API FFortTimedKeysState();
};

