#pragma once
#include "CoreMinimal.h"
#include "FortShowdownDetailView.h"
#include "FortTournamentDetailsPage.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTournamentDetailsPage : public UFortShowdownDetailView {
    GENERATED_BODY()
public:
    UFortTournamentDetailsPage();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandleBack(bool& bResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateScreen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBackClicked();
    
};

