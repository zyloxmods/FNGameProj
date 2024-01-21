#pragma once
#include "CoreMinimal.h"
#include "IntensityContribution.h"
#include "IntensityData.generated.h"

class UBuildingEditModeMetadata;

USTRUCT(BlueprintType)
struct FIntensityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntensityContribution> ContributingFactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContributionsTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata*> ExceptionEditModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExceptionEditModeWeight;
    
    FORTNITEGAME_API FIntensityData();
};

