#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ESpectatorCameraType.h"
#include "AthenaSpectatorHUDControlsBase.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorHUDControlsBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaSpectatorHUDControlsBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCameraTypeChanged(AFortPlayerControllerSpectating* SpectatorPC, ESpectatorCameraType NewCameraType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CenterControls();
    
};

