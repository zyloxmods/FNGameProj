#pragma once
#include "CoreMinimal.h"
#include "ItemAndCount.h"
#include "MinigameClassSlot.generated.h"

USTRUCT(BlueprintType)
struct FMinigameClassSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ClassSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> InventoryItems;
    
    FORTNITEGAME_API FMinigameClassSlot();
};

