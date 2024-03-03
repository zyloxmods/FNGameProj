#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingDefaultRotation.h"
#include "InteriorAudioBuildingRotationConstraint.generated.h"

USTRUCT(BlueprintType)
struct FInteriorAudioBuildingRotationConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteriorAudioBuildingDefaultRotation StartingOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XScaleFlipRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YScaleFlipRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDotProductComparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DotProductComparison;
    
    FORTNITEGAME_API FInteriorAudioBuildingRotationConstraint();
};

