#pragma once
#include "CoreMinimal.h"
#include "AthenaDiscoverabilityBase.h"
#include "AthenaDiscoveredAreaOverlay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaDiscoveredAreaOverlay : public UAthenaDiscoverabilityBase {
    GENERATED_BODY()
public:
    UAthenaDiscoveredAreaOverlay();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewDiscovery(const FText& LocalizedLocationName, bool bIsNamedLocation);
    
};

