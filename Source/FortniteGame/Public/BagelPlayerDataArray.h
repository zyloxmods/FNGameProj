#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BagelPlayerDataEntry.h"
#include "BagelPlayerDataArray.generated.h"

USTRUCT(BlueprintType)
struct FBagelPlayerDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBagelPlayerDataEntry> Entries;
    
    FORTNITEGAME_API FBagelPlayerDataArray();
};

