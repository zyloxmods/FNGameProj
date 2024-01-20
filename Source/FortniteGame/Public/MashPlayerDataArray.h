#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MashPlayerDataEntry.h"
#include "MashPlayerDataArray.generated.h"

USTRUCT(BlueprintType)
struct FMashPlayerDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMashPlayerDataEntry> Entries;
    
    FORTNITEGAME_API FMashPlayerDataArray();
};

