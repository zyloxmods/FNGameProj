#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "IgnoredPlayerPawnDataEntry.h"
#include "IgnoredPlayerPawnArray.generated.h"

class AAthenaHoldingArea;

USTRUCT(BlueprintType)
struct FIgnoredPlayerPawnArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaHoldingArea* OwningHoldingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIgnoredPlayerPawnDataEntry> IgnorePawnEntries;
    
    FORTNITEGAME_API FIgnoredPlayerPawnArray();
};

