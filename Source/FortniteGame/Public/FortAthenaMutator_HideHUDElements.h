#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_HideHUDElements.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_HideHUDElements : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAthenaGamePhase, FGameplayTagContainer> HUDElementsToHideAtGamePhaseStart;
    
public:
    AFortAthenaMutator_HideHUDElements();
private:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
};

