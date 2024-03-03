#pragma once
#include "CoreMinimal.h"
#include "FriendCodeIssuedNotification.generated.h"

USTRUCT(BlueprintType)
struct FFriendCodeIssuedNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CodeType;
    
    FORTNITEGAME_API FFriendCodeIssuedNotification();
};

