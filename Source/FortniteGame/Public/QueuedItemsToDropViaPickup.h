#pragma once
#include "CoreMinimal.h"
#include "QueuedItemsToDropViaPickup.generated.h"

class AFortPawn;
class UFortWorldItem;

USTRUCT(BlueprintType)
struct FQueuedItemsToDropViaPickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* DestructionPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalNumItemsToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItem*> ItemsToDrop;
    
    FORTNITEGAME_API FQueuedItemsToDropViaPickup();
};

