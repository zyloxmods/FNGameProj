#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_AthenaLoadouts.generated.h"

class UFortAthenaInventoryLoadout;
class UUserWidget;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_AthenaLoadouts : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> LoadoutUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaInventoryLoadout*> Loadouts;
    
public:
    AFortAthenaMutator_AthenaLoadouts();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
};

