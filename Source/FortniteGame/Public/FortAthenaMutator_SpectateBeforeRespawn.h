#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_SpectateBeforeRespawn.generated.h"

class AFortPlayerControllerZone;

UCLASS(Blueprintable)
class AFortAthenaMutator_SpectateBeforeRespawn : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpectateToRespawnTransitionTime;
    
public:
    AFortAthenaMutator_SpectateBeforeRespawn();
protected:
    UFUNCTION(BlueprintCallable)
    void OnClientStartedRespawn(AFortPlayerControllerZone* PlayerController);
    
};

