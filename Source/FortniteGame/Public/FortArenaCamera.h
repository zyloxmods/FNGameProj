#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortArenaCamera.generated.h"

class UFortSpectatorCameraComponent;

UCLASS(Blueprintable)
class AFortArenaCamera : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSpectatorCameraComponent> CameraComponentType;
    
public:
};

