#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookUnslotItemNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortCollectionBookUnslotItemNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnslottedItemId;
    
    FORTNITEGAME_API FFortCollectionBookUnslotItemNotification();
};

