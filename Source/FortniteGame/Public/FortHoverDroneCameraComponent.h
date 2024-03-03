#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortSpectatorCameraComponent.h"
#include "FortHoverDroneCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortHoverDroneCameraComponent : public UFortSpectatorCameraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DroneTiltInterpSpeed_Accel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DroneTiltInterpSpeed_Decel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TiltUpVector;
    
public:
    UFortHoverDroneCameraComponent();
};

