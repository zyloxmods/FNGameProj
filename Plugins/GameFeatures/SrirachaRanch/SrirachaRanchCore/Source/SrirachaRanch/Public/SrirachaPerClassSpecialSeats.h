#pragma once
#include "CoreMinimal.h"
#include "SrirachaPerClassSpecialSeats.generated.h"

USTRUCT(BlueprintType)
struct FSrirachaPerClassSpecialSeats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> OutsideSeatIndices;
    
    SRIRACHARANCH_API FSrirachaPerClassSpecialSeats();
};

