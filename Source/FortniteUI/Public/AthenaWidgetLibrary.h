#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AthenaWidgetLibrary.generated.h"

class APlayerController;
class APlayerState;
class UObject;

UCLASS(Blueprintable)
class UAthenaWidgetLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAthenaWidgetLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayingReplay(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCreativeOrPlaygroundModePlaylist(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerState* GetRelevantPlayerState(const APlayerController* PlayerController);
    
};

