#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "ItemsToGiveAtPhase.h"
#include "FortAthenaMutator_GiveItemsAtGamePhase.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_GiveItemsAtGamePhase : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase PhaseToGiveItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemsToGiveAtPhase> ItemsToGive;
    
public:
    AFortAthenaMutator_GiveItemsAtGamePhase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

