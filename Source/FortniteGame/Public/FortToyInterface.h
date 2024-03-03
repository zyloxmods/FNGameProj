#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortToyInterface.generated.h"

class AFortPlayerController;

UINTERFACE(Blueprintable)
class UFortToyInterface : public UInterface {
    GENERATED_BODY()
};

class IFortToyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartToyFadeOutDueToNewPlacement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyToyInstanceOfReuse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeToyPreviewInFrontend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeToyInstance(AFortPlayerController* OwningPC, int32 NumTimesSummoned);
    
};

