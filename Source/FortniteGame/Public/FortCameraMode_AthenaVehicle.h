#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortCameraMode_ThirdPerson.h"
#include "FortCameraMode_AthenaVehicle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortCameraMode_AthenaVehicle : public UFortCameraMode_ThirdPerson {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOriginOffset;
    
    UFortCameraMode_AthenaVehicle();
};

