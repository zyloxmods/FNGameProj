#pragma once
#include "CoreMinimal.h"
#include "EAthenaPlayerActionAlert.h"
#include "FortHUDElementWidget.h"
#include "AthenaHUDPlayerActionAlertBase.generated.h"

class AFortPlayerPawnAthena;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaHUDPlayerActionAlertBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawnAthena> CurrentPlayerPawn;
    
public:
    UAthenaHUDPlayerActionAlertBase();
protected:
    UFUNCTION(BlueprintCallable)
    void RequestNextAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlertPlayer(EAthenaPlayerActionAlert Alert, const FText& DetailText);
    
};

