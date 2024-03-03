#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "FortSpectatorCameraComponent.generated.h"

class AActor;
class AFortPlayerControllerSpectating;
class UCurveVector;
class UFortSpectateBlend;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortSpectatorCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerSpectating* SpectatorController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* IntendedViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSpectateBlend* CurrentBlend;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ScreenFringeFOVCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocalLengthInterpSpeed;
    
public:
    UFortSpectatorCameraComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnFocalLengthSettingChanged(float NewFocalLength);
    
    UFUNCTION(BlueprintCallable)
    void OnApertureSettingChanged(float NewAperture);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutoCameraCutDistanceThreshold() const;
    
};

