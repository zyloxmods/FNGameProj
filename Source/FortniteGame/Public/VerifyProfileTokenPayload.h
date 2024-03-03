#pragma once
#include "CoreMinimal.h"
#include "VerifyProfileTokenPayload.generated.h"

USTRUCT(BlueprintType)
struct FVerifyProfileTokenPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ProfileTokens;
    
    FORTNITEGAME_API FVerifyProfileTokenPayload();
};

