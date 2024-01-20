#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortCameraMode_ThirdPerson.h"
#include "FortCameraMode_AthenaAircraft.generated.h"

UCLASS(Blueprintable)
class UFortCameraMode_AthenaAircraft : public UFortCameraMode_ThirdPerson {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOriginInterpSpeedToPawn;
    
    UFortCameraMode_AthenaAircraft();
};

