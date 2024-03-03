#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "WaxPlayerDataEntry.h"
#include "WaxPlayerDataArray.generated.h"

class AFortAthenaMutator_Wax;

USTRUCT(BlueprintType)
struct FWaxPlayerDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Wax* OwningMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaxPlayerDataEntry> Entries;
    
    FORTNITEGAME_API FWaxPlayerDataArray();
};

