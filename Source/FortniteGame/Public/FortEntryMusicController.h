#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortEntryMusicController.generated.h"

UCLASS(Blueprintable)
class AFortEntryMusicController : public AActor {
    GENERATED_BODY()
public:
    AFortEntryMusicController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMusic();
    
};

