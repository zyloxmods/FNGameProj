#pragma once
#include "CoreMinimal.h"
#include "EVolumeState.h"
#include "HUDMessageData.h"
#include "Styling/SlateColor.h"
#include "Components/RichTextBlock.h"
#include "FortHUDElementWidget.h"
#include "AthenaWinConditionMsgBase.generated.h"

class AFortGameState;
class AFortVolume;
class APlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaWinConditionMsgBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaWinConditionMsgBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnShowHUDMessage(FHUDMessageData MessageData);
    
    UFUNCTION(BlueprintCallable)
    void HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlaylistInitialized();
    
    UFUNCTION(BlueprintCallable)
    void HandleMinigameEnded();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateInitialized(AFortGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void HandleExitVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleEnteredVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor GetTextFillColor(const FRichTextStyleRow& Row) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShowHUDMessage(FHUDMessageData MessageData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMinigameEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGameStateInitialized(AFortGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void BindVolumeManagerEvents();
    
};

