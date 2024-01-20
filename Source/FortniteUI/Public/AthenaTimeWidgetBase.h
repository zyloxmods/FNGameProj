#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EAthenaGamePhase.h"
#include "EAthenaGamePhaseStep.h"
#include "FortHUDElementWidget.h"
#include "AthenaTimeWidgetBase.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaTimeWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDisplaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedFinalCountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimeText;
    
public:
    UAthenaTimeWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTimeText();
    
    UFUNCTION(BlueprintCallable)
    void StopTimeDisplay();
    
    UFUNCTION(BlueprintCallable)
    void StartTimeDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopTimeDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartTimeDisplay();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

