#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ArsenicPlayerDataEntry.h"
#include "ArsenicPlayerDataArray.generated.h"

USTRUCT(BlueprintType)
struct FArsenicPlayerDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArsenicPlayerDataEntry> Entries;
    
    ARSENICRUNTIME_API FArsenicPlayerDataArray();
};

