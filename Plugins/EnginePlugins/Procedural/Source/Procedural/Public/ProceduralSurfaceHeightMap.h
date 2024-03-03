#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralFloatDataMap.h"
#include "ProceduralSurfaceHeightMap.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralSurfaceHeightMap : public UProceduralFloatDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNormalizedHeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval HeightRange;
    
    UProceduralSurfaceHeightMap();
    UFUNCTION(BlueprintCallable)
    void SetHeightRangeMin(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightRangeMax(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue(float InHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeightRangeMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeightRangeMax() const;
    
};

