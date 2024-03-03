#pragma once
#include "CoreMinimal.h"
#include "GiftMessage.generated.h"

USTRUCT(BlueprintType)
struct FGiftMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GiftCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SenderName;
    
    ACCOUNT_API FGiftMessage();
};

