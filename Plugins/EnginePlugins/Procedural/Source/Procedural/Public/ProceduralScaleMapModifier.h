#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralScaleModifier.h"
#include "ProceduralScaleMapModifier.generated.h"

class UProceduralFloatDataMap;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralScaleMapModifier : public UProceduralScaleModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemapScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval RemapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralFloatDataMap* Map;
    
    UProceduralScaleMapModifier();
    UFUNCTION(BlueprintCallable)
    void SetRemapScaleMin(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRemapScaleMax(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemapScaleMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemapScaleMax() const;
    
};

