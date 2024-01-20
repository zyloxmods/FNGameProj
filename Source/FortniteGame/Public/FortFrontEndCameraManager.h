#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFrontEndCamera.h"
#include "FortPlayerCameraBase.h"
#include "FortFrontEndCameraManager.generated.h"

class AFortCameraBase;
class AFrontEndSettings;
class IFortUICameraFrameInterface;
class UFortUICameraFrameInterface;
class IFortUICameraFrameTargetInterface;
class UFortUICameraFrameTargetInterface;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API AFortFrontEndCameraManager : public AFortPlayerCameraBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrontEndCamera CurrentCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFrontEndSettings* FrontEndSettings;
    
public:
    AFortFrontEndCameraManager();
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

