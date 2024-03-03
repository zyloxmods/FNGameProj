#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookSlotItemNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortCollectionBookSlotItemNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlottedItemId;
    
    FORTNITEGAME_API FFortCollectionBookSlotItemNotification();
};

