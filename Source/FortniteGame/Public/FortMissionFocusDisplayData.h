#pragma once
#include "CoreMinimal.h"
#include "FortMissionFocusDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionFocusDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentFocusDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFocusPercentage;
    
    FORTNITEGAME_API FFortMissionFocusDisplayData();
};

