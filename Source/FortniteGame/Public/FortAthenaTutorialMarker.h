#pragma once
#include "CoreMinimal.h"
#include "FortStaticMeshActor.h"
#include "FortAthenaTutorialMarker.generated.h"

UCLASS(Blueprintable)
class AFortAthenaTutorialMarker : public AFortStaticMeshActor {
    GENERATED_BODY()
public:
    AFortAthenaTutorialMarker();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerVisibilityChanged(bool IsActive);
    
};

