#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GliderThrustData.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct FGliderThrustData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PitchOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D VolumeOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* Sound;
    
    FORTSOUNDCUETEMPLATES_API FGliderThrustData();
};

