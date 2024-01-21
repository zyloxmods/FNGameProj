#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_Storm.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_Storm : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SafeZoneFinalDestinationX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SafeZoneFinalDestinationY;
    
public:
    AFortAthenaMutator_Storm();
    UFUNCTION(BlueprintCallable)
    void PauseStormProgression(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void PauseStormDamage(bool bPause);
    
};

