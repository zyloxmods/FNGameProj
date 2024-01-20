#pragma once
#include "CoreMinimal.h"
#include "FortItemDetailElementWidget.h"
#include "FortHeroLoadoutAbilitiesDetailPanel.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroLoadoutAbilitiesDetailPanel : public UFortItemDetailElementWidget {
    GENERATED_BODY()
public:
    UFortHeroLoadoutAbilitiesDetailPanel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerHomebaseChanged();
    
    UFUNCTION(BlueprintCallable)
    void ListenForChanges(bool bListen);
    
};

