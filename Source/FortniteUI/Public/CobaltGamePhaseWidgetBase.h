#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "LTMWidgetBase.h"
#include "CobaltGamePhaseWidgetBase.generated.h"

class AFortGameState;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable, EditInlineNew)
class UCobaltGamePhaseWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormComingWarningTime;
    
public:
    UCobaltGamePhaseWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimeDisplay(bool bSetWarningFont, const FText& NewTimeDisplay);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AFortGameState* InGameState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownUpdate(int32 TimeRemaining);
    
};

