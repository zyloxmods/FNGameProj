#pragma once
#include "CoreMinimal.h"
#include "EAthenaCustomizationCategory.h"
#include "FortAthenaLoadoutData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortAthenaLoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaCustomizationCategory SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemToSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexWithinSlot;
    
    FFortAthenaLoadoutData();
};

