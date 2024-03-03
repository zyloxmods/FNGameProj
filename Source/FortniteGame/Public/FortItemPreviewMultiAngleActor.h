#pragma once
#include "CoreMinimal.h"
#include "FortItemPreviewActor.h"
#include "FortItemPreviewMultiAngleActor.generated.h"

class UCameraComponent;
class UCurveFloat;
class USceneComponent;

UCLASS(Blueprintable)
class AFortItemPreviewMultiAngleActor : public AFortItemPreviewActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraRotationRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* PrimaryCameraComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleTransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AngleTransitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ActiveCameraAngle;
    
public:
    AFortItemPreviewMultiAngleActor();
};

