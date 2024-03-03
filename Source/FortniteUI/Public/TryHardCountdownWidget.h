#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "FortHUDElementWidget.h"
#include "TryHardCountdownWidget.generated.h"

class AFortPlayerStateZone;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable, EditInlineNew)
class UTryHardCountdownWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumToStartShowingAt;
    
public:
    UTryHardCountdownWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNumber(int32 NumRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowWidget(int32 NumRemaining);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsShowing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideWidget();
    
};

