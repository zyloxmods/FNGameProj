#pragma once
#include "CoreMinimal.h"
#include "FilledGadgetSlot.generated.h"

USTRUCT(BlueprintType)
struct FFilledGadgetSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Gadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slot_index;
    
    FORTNITEGAME_API FFilledGadgetSlot();
};

