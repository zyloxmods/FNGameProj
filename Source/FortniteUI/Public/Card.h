#pragma once
#include "CoreMinimal.h"
#include "EPauseType.h"
#include "Card.generated.h"

class UFortItem;

USTRUCT(BlueprintType)
struct FCard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPauseType PauseType;
    
    FORTNITEUI_API FCard();
};

