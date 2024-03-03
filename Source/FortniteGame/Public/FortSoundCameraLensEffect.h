#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "EFortSoundIndicatorTypes.h"
#include "FortEmitterCameraLensEffectDirectional.h"
#include "SoundIndicatorInitializationData.h"
#include "FortSoundCameraLensEffect.generated.h"

class AActor;
class UTexture;

UCLASS(Blueprintable)
class AFortSoundCameraLensEffect : public AFortEmitterCameraLensEffectDirectional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortSoundIndicatorTypes IndicatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SnapToSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAudibleDistanceOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InstigatingActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* IconOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TintOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortSoundIndicatorTypes, FSoundIndicatorInitializationData> EmitterDataMap;
    
public:
    AFortSoundCameraLensEffect();
    UFUNCTION(BlueprintCallable)
    void SetType(EFortSoundIndicatorTypes NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetTintOverride(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetStrengthCurve(const FRuntimeFloatCurve& Curve);
    
    UFUNCTION(BlueprintCallable)
    void SetInstigatingActor(const AActor* NewInstigator);
    
    UFUNCTION(BlueprintCallable)
    void SetIconOverride(UTexture* NewIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(UTexture* NewIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FRuntimeFloatCurve GetStrengthCurveForActiveType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FLinearColor GetDefaultTint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTexture* GetDefaultIcon();
    
};

