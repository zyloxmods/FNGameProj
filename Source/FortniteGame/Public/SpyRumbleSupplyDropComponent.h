#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpyRumbleSupplyDropComponent.generated.h"

class AFortAthenaMutator_SpyRumble;
class AFortPlayerControllerAthena;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpyRumbleSupplyDropComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_SpyRumble> CachedMutator;
    
public:
    USpyRumbleSupplyDropComponent();
    UFUNCTION(BlueprintCallable)
    void OnSupplyDropCollected(AFortPlayerControllerAthena* PlayerController);
    
};

