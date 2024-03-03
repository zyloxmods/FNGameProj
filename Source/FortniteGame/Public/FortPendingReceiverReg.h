#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortPendingReceiverReg.generated.h"

USTRUCT(BlueprintType)
struct FFortPendingReceiverReg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ChannelIds;
    
    FORTNITEGAME_API FFortPendingReceiverReg();
};

