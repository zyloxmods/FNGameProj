#pragma once
#include "CoreMinimal.h"
#include "SeatTransitionMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSeatTransitionMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FromSeatIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToSeatIndex;
    
    FORTNITEGAME_API FSeatTransitionMontage();
};

