#pragma once
#include "CoreMinimal.h"
#include "EAthenaSquadListUpdateType.h"
#include "FortHUDElementWidget.h"
#include "AthenaRebootChipDirective.generated.h"

class AFortPlayerStateAthena;
class UAthenaPlayerViewModel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaRebootChipDirective : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* PlayerVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> SquadMemebers;
    
public:
    UAthenaRebootChipDirective();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSquadListDisplay(EAthenaSquadListUpdateType UpdateType, AFortPlayerStateAthena* PS);
    
};

