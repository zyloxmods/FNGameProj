#pragma once
#include "CoreMinimal.h"
#include "ReplicatedMontageIndexPair.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FReplicatedMontageIndexPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FORTNITEGAME_API FReplicatedMontageIndexPair();
};

