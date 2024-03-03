#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EAthenaGamePhase.h"
#include "EAthenaGamePhaseStep.h"
#include "FortHUDElementWidget.h"
#include "AthenaTimeWidgetBase.generated.h"

class AFortCreativeTimerObjective;
class AFortVolume;
class APlayerState;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaTimeWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText CachedDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CachedDisplayTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDisplaying;
    
public:
    UAthenaTimeWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTimeText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplay(const FText& DisplayText, const FName DisplayTextStyle);
    
    UFUNCTION(BlueprintCallable)
    void OnTimerObjectiveUpdated(const AFortCreativeTimerObjective* TimerObjective);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopTimeDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartTimeDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMinigameStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMinigameEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTextStyleValid(const FName DisplayTextStyle);
    
    UFUNCTION(BlueprintCallable)
    void ClientEnteredVolume(APlayerState* PlayerState, AFortVolume* FortVolume);
    
};

