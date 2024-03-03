#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMessageDispatcherErrorMessageType.h"
#include "FortCreativeMessageDispatcherErrorMessage.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeMessageDispatcherErrorMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMessageDispatcherErrorMessageType ErrorMessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChannelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LimitValue;
    
    FORTNITEGAME_API FFortCreativeMessageDispatcherErrorMessage();
};

