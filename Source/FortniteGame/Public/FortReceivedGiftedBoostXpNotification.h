#pragma once
#include "CoreMinimal.h"
#include "FortReceivedGiftedBoostXpNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortReceivedGiftedBoostXpNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountBoostXpGifted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GifterAccountId;
    
    FORTNITEGAME_API FFortReceivedGiftedBoostXpNotification();
};

