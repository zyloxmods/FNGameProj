#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "FortMissionPowerPointsInterface.h"
#include "FortDifficultyOption.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortDifficultyOption : public UObject, public IFortMissionPowerPointsInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CostAndAvailability;
    
public:
    UFortDifficultyOption();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    float GetPowerPointsCost(float LerpValue) const override PURE_VIRTUAL(GetPowerPointsCost, return 0.0f;);
    
    UFUNCTION()
    float GetMaxRangeLerpValue(float PointsAvailable, float PreviousLerpValue) const override PURE_VIRTUAL(GetMaxRangeLerpValue, return 0.0f;);
    
    UFUNCTION()
    float GetInitialRangeLerpValue(float PointsAvailable) const override PURE_VIRTUAL(GetInitialRangeLerpValue, return 0.0f;);
    
    UFUNCTION()
    float GetAvailabilityWeight(float DifficultyLevel) const override PURE_VIRTUAL(GetAvailabilityWeight, return 0.0f;);
    
};

