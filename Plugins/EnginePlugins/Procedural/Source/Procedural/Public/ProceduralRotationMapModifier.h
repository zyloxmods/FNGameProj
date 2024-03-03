#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EProceduralRotationFormat.h"
#include "ProceduralRotationModifier.h"
#include "ProceduralRotationMapModifier.generated.h"

class UProceduralVectorDataMap;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralRotationMapModifier : public UProceduralRotationModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralVectorDataMap* Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProceduralRotationFormat RotationFormat;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Roll;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Pitch;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Yaw;
    
    UProceduralRotationMapModifier();
    UFUNCTION(BlueprintCallable)
    void SetYawMin(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetYawMax(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRollMin(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRollMax(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchMin(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchMax(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetYawMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetYawMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRollMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRollMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPitchMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPitchMax() const;
    
};

