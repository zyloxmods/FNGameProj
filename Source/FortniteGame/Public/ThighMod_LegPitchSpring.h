#pragma once
#include "CoreMinimal.h"
#include "ThighMod_LegPitchSpring.generated.h"

USTRUCT(BlueprintType)
struct FThighMod_LegPitchSpring {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegPitchStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegPitchDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegPitchMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegPitchClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegPitchClampMax;
    
    FORTNITEGAME_API FThighMod_LegPitchSpring();
};

