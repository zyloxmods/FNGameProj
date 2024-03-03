#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortMissionPowerPointsInterface.generated.h"

UINTERFACE()
class UFortMissionPowerPointsInterface : public UInterface {
    GENERATED_BODY()
};

class IFortMissionPowerPointsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual float GetPowerPointsCost(float LerpValue) const PURE_VIRTUAL(GetPowerPointsCost, return 0.0f;);
    
    UFUNCTION()
    virtual float GetMaxRangeLerpValue(float PointsAvailable, float PreviousLerpValue) const PURE_VIRTUAL(GetMaxRangeLerpValue, return 0.0f;);
    
    UFUNCTION()
    virtual float GetInitialRangeLerpValue(float PointsAvailable) const PURE_VIRTUAL(GetInitialRangeLerpValue, return 0.0f;);
    
    UFUNCTION()
    virtual float GetAvailabilityWeight(float DifficultyLevel) const PURE_VIRTUAL(GetAvailabilityWeight, return 0.0f;);
    
};

