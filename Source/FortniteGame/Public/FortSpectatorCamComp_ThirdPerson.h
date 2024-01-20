#pragma once
#include "CoreMinimal.h"
#include "FortSpectatorCameraComponent.h"
#include "FortSpectatorCamComp_ThirdPerson.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSpectatorCamComp_ThirdPerson : public UFortSpectatorCameraComponent {
    GENERATED_BODY()
public:
    UFortSpectatorCamComp_ThirdPerson();
};

