#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EarnedBadgeEntry.h"
#include "EarnedBadgeEntryArray.generated.h"

USTRUCT(BlueprintType)
struct FEarnedBadgeEntryArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEarnedBadgeEntry> Items;
    
public:
    FORTNITEGAME_API FEarnedBadgeEntryArray();
};

