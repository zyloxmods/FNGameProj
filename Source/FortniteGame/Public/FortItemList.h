#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortItemEntry.h"
#include "FortItemList.generated.h"

class UFortWorldItem;

USTRUCT(BlueprintType)
struct FFortItemList : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> ReplicatedEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItem*> ItemInstances;
    
    FORTNITEGAME_API FFortItemList();
};

