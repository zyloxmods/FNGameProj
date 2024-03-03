#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Card.h"
#include "StoreCardObject.generated.h"

UCLASS(Blueprintable)
class UStoreCardObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCard Card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OriginalIndex;
    
    UStoreCardObject();
};

