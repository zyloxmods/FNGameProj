#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_QuickbarRestore.generated.h"

class AFortPlayerControllerZone;

UCLASS(Blueprintable)
class AFortAthenaMutator_QuickbarRestore : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    AFortAthenaMutator_QuickbarRestore();
protected:
    UFUNCTION(BlueprintCallable)
    void OnClientStartedRespawn(AFortPlayerControllerZone* PlayerController);
    
};

