#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EFrontEndCamera.h"
#include "FortUICameraManagerComponent.generated.h"

class AActor;
class AFortCameraBase;
class IFortUICameraFrameInterface;
class UFortUICameraFrameInterface;
class IFortUICameraFrameTargetInterface;
class UFortUICameraFrameTargetInterface;

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortUICameraManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdatingViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFrontEndCamera CurrentCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EFrontEndCamera, AFortCameraBase*> CameraMapping;
    
public:
    UFortUICameraManagerComponent();
    UFUNCTION(BlueprintCallable)
    void SetZoomLevel(const float ZoomLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameTarget(const TScriptInterface<IFortUICameraFrameTargetInterface>& FrameTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomCameraRotationOffset(const FRotator Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFrame(const TScriptInterface<IFortUICameraFrameInterface> NewFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetCamera(EFrontEndCamera NewCamera);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCameraFrameTargetSettingsChanged(TScriptInterface<IFortUICameraFrameTargetInterface> FrameTarget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoomLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortCameraBase* GetCameraActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFrontEndCamera GetCamera() const;
    
};

