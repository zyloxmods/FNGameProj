#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortPickupAthena.h"
#include "FortGameModePickup.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortGameModePickup : public AFortPickupAthena {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InteractionTime;
    
public:
    AFortGameModePickup();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalInterrupt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalBeginLongUse();
    
};

