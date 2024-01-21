#pragma once
#include "CoreMinimal.h"
#include "EFortAIWaveProgressSection.h"
#include "FortAIEncounterWaveProgressEstimation.generated.h"

USTRUCT(BlueprintType)
struct FFortAIEncounterWaveProgressEstimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectionProgressEstimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastWaveProgressUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeakAndFadeWavePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAdjustmentPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortAIWaveProgressSection::Type> CurrentSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfWaveSegments;
    
    FORTNITEGAME_API FFortAIEncounterWaveProgressEstimation();
};

