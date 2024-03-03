#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralScaleModifier.h"
#include "ProceduralScaleNoiseModifier.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralScaleNoiseModifier : public UProceduralScaleModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Scale;
    
    UProceduralScaleNoiseModifier();
    UFUNCTION(BlueprintCallable)
    void SetScaleMin(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleMax(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaleMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaleMax() const;
    
};

