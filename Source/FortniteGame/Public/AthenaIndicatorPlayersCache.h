#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AthenaIndicatorPlayersCache.generated.h"

class AFortVolume;
class APlayerState;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaIndicatorPlayersCache : public UObject {
    GENERATED_BODY()
public:
    UAthenaIndicatorPlayersCache();
private:
    UFUNCTION(BlueprintCallable)
    void HandleRefreshIndicatorPlayersCache();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerEnterVolume(APlayerState* Client, AFortVolume* Volume);
    
};

