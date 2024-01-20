#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortActivatablePanel.h"
#include "FortTournamentModal.generated.h"

class UFortTournamentDetailsPage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTournamentModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTournamentDetailsPage* TournamentDetailsPage;
    
public:
    UFortTournamentModal();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTournamentSet(FLinearColor LeftColor, FLinearColor RightColor);
    
};

