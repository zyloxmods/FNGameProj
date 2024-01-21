#pragma once
#include "CoreMinimal.h"
#include "FortReplaySpectatorPawnBase.h"
#include "HoverDronePawn.generated.h"

class UHoverDroneMovementComponent;

UCLASS(Blueprintable)
class AHoverDronePawn : public AFortReplaySpectatorPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHoverDroneMovementComponent* HoverMoveComponent;
    
public:
    AHoverDronePawn();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaintainingConstantAltitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAltitude() const;
    
};

