#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortSafeZoneBlueprintLibrary.generated.h"

class APlayerState;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable)
class UFortSafeZoneBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortSafeZoneBlueprintLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TScriptInterface<IFortSafeZoneInterface> GetRelevantSafeZoneInterface(APlayerState* PlayerContext);
    
};

