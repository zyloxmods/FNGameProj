#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_Autofire.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_Autofire : public UFortControllerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AutoFireReticleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AutofireTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayedStopAutofireTimerHandle;
    
public:
    UFortControllerComponent_Autofire();
};

