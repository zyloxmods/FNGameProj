#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticLockerSlotsActiveVariants.h"
#include "FortCosmeticLockerSlots.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticLockerSlots {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticLockerSlotsActiveVariants> ActiveVariants;
    
    FORTNITEGAME_API FFortCosmeticLockerSlots();
};

