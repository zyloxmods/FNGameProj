#pragma once
#include "CoreMinimal.h"
#include "EventResponderTrackingItem.generated.h"

class UFortEventResponderComponent;

USTRUCT(BlueprintType)
struct FEventResponderTrackingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortEventResponderComponent*> EventResponders;
    
    FORTNITEGAME_API FEventResponderTrackingItem();
};

