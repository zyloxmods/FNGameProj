#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortEventPurchaseTrackerItem.generated.h"

UCLASS(Blueprintable)
class UFortEventPurchaseTrackerItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_instance_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> event_purchases;
    
public:
    UFortEventPurchaseTrackerItem();
};

