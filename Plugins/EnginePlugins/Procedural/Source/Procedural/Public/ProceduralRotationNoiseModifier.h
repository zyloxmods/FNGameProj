#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralRotationModifier.h"
#include "ProceduralRotationNoiseModifier.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralRotationNoiseModifier : public UProceduralRotationModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRandomRoll: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval RandomRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRandomPitch: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval RandomPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRandomYaw: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval RandomYaw;
    
    UProceduralRotationNoiseModifier();
    UFUNCTION(BlueprintCallable)
    void SetRandomYawMin(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomYawMax(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomRollMin(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomRollMax(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomPitchMin(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomPitchMax(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomYawMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomYawMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomRollMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomRollMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomPitchMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomPitchMax() const;
    
};

