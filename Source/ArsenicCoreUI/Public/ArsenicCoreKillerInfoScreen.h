#pragma once
#include "CoreMinimal.h"
#include "FortPlayerDeathReport.h"
#include "ArsenicCoreActivatablePanelBase.h"
#include "ArsenicCoreKillerInfoScreen.generated.h"

class AFortPlayerStateAthena;
class UAthenaLastKillerInfoWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARSENICCOREUI_API UArsenicCoreKillerInfoScreen : public UArsenicCoreActivatablePanelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaLastKillerInfoWidget* Widget_KillerInfo;
    
public:
    UArsenicCoreKillerInfoScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIntroAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerDiedAsHuman(const AFortPlayerStateAthena* VictimPlayerState, const FFortPlayerDeathReport& DeathReport);
    
};

