#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralFloatDataMap.h"
#include "ProceduralSurfaceSlopeAngleMap.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralSurfaceSlopeAngleMap : public UProceduralFloatDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNormalizedSlopeAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval SlopeAngleRange;
    
    UProceduralSurfaceSlopeAngleMap();
    UFUNCTION(BlueprintCallable)
    void SetSlopeAngleRangeMin(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSlopeAngleRangeMax(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue(float InSlopeAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlopeAngleRangeMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlopeAngleRangeMax() const;
    
};

