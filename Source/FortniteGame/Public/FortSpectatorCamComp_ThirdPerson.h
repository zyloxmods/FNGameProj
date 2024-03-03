#pragma once
#include "CoreMinimal.h"
#include "FortSpectatorCameraComponent.h"
#include "FortSpectatorCamComp_ThirdPerson.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSpectatorCamComp_ThirdPerson : public UFortSpectatorCameraComponent {
    GENERATED_BODY()
public:
    UFortSpectatorCamComp_ThirdPerson();
protected:
    UFUNCTION(BlueprintCallable)
    void OnNormalizedDistanceChanged(float NewDistance);
    
};

