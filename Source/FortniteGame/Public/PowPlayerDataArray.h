#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PowPlayerDataEntry.h"
#include "PowPlayerDataArray.generated.h"

class AFortAthenaMutator_Pow;

USTRUCT(BlueprintType)
struct FPowPlayerDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Pow* OwningMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPowPlayerDataEntry> Entries;
    
    FORTNITEGAME_API FPowPlayerDataArray();
};

