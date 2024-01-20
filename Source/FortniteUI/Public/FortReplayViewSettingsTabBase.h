#pragma once
#include "CoreMinimal.h"
#include "ESpectatorCameraType.h"
#include "FortActivatablePanel.h"
#include "FortReplayViewSettingsTabBase.generated.h"

class AFortPlayerControllerSpectating;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReplayViewSettingsTabBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerSpectating* SpectatingPC;
    
public:
    UFortReplayViewSettingsTabBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetValues();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetToDefault();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCameraTypeChanged(AFortPlayerControllerSpectating* FortPlayerControllerSpectating, ESpectatorCameraType CameraType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CenterOnTab();
    
};

