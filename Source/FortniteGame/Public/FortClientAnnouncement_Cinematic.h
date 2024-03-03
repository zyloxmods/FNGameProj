#pragma once
#include "CoreMinimal.h"
#include "FortClientAnnouncement.h"
#include "FortClientAnnouncement_Cinematic.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortClientAnnouncement_Cinematic : public AFortClientAnnouncement {
    GENERATED_BODY()
public:
    AFortClientAnnouncement_Cinematic();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPlayerSkippedCutscene();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredCinematicState();
    
};

