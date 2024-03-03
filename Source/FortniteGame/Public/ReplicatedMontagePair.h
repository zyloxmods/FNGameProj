#pragma once
#include "CoreMinimal.h"
#include "ReplicatedMontagePair.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FReplicatedMontagePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Section1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Section2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 RepIndex;
    
    FORTNITEGAME_API FReplicatedMontagePair();
};

