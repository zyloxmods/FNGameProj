#pragma once
#include "CoreMinimal.h"
#include "FortReceivedGiftedBoostXpNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortReceivedGiftedBoostXpNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountBoostXpGifted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GifterAccountId;
    
    FFortReceivedGiftedBoostXpNotification();
};

