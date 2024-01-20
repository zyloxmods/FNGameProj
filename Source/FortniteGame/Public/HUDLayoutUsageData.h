#pragma once
#include "CoreMinimal.h"
#include "HUDLayoutUsageData.generated.h"

USTRUCT(BlueprintType)
struct FHUDLayoutUsageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfTimesOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfTimesReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfTimesSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfTimesPanning;
    
    FORTNITEGAME_API FHUDLayoutUsageData();
};

