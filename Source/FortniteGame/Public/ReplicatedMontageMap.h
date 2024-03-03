#pragma once
#include "CoreMinimal.h"
#include "ReplicatedMontageIndexPair.h"
#include "ReplicatedMontageMap.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedMontageMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedMontageIndexPair> Mappings;
    
public:
    FORTNITEGAME_API FReplicatedMontageMap();
};

