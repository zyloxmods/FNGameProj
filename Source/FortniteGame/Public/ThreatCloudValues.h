#pragma once
#include "CoreMinimal.h"
#include "CloudColorState.h"
#include "ThreatCloudValues.generated.h"

USTRUCT(BlueprintType)
struct FThreatCloudValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloudColorState CloudActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloudColorState CloudDeactivated;
    
    FORTNITEGAME_API FThreatCloudValues();
};

