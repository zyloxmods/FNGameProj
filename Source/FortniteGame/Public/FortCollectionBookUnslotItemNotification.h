#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookUnslotItemNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCollectionBookUnslotItemNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnslottedItemId;
    
    FFortCollectionBookUnslotItemNotification();
};

