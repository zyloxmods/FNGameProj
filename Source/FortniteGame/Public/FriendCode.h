#pragma once
#include "CoreMinimal.h"
#include "FriendCode.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFriendCode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CodeType;
    
    FFriendCode();
};

