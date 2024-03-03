#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortContextualTutorial.h"
#include "FortWorldMarkerData.h"
#include "FortContextualTutorial_MarkLocation.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_MarkLocation : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_MarkLocation();
private:
    UFUNCTION(BlueprintCallable)
    void OnAddMapMarkerOnClient(const FFortWorldMarkerData& Marker);
    
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnLanded(const FHitResult& Hit);
    
};

