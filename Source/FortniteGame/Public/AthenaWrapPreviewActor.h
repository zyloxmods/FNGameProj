#pragma once
#include "CoreMinimal.h"
#include "CosmeticPreviewInterface.h"
#include "EWrapPreviewCamera.h"
#include "FortItemPreviewMultiAngleActor.h"
#include "AthenaWrapPreviewActor.generated.h"

class UCameraComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AAthenaWrapPreviewActor : public AFortItemPreviewMultiAngleActor, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInWeaponCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutVehicleCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInVehicleCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutCampaignVehicleCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInCampaignVehicleCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutLargeWeaponCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInLargeWeaponCameraComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PreviewSpawnPointComponent;
    
public:
    AAthenaWrapPreviewActor();
protected:
    UFUNCTION(BlueprintCallable)
    void ShowNextPreviewMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowingVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrapPreviewCamera GetActiveCamera() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

