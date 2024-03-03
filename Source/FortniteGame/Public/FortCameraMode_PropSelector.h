#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortCameraMode_ThirdPerson.h"
#include "FortCameraMode_PropSelector.generated.h"

UCLASS(Blueprintable)
class UFortCameraMode_PropSelector : public UFortCameraMode_ThirdPerson {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PropOffsetScale_ViewTargetSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinPropOffset_ViewTargetSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxPropOffset_ViewTargetSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PropOffsetScale_CameraSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinPropOffset_CameraSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxPropOffset_CameraSpace;
    
public:
    UFortCameraMode_PropSelector();
};

