#pragma once
#include "CoreMinimal.h"
#include "EAthenaCustomizationCategory.h"
#include "FortCosmeticLockerSlotInformation.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticLockerSlotInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaCustomizationCategory CustomizationCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSlotsOfCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeBlank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeUniqueInArray;
    
    FORTNITEGAME_API FFortCosmeticLockerSlotInformation();
};

