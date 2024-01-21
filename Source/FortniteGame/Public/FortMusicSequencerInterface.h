#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortMusicSequencerInterface.generated.h"

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortMusicSequencerInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortMusicSequencerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitByMusicSequencer();
    
};

