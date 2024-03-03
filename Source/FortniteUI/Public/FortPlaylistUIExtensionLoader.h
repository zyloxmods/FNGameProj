#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUIExtensionSlot.h"
#include "EVolumeState.h"
#include "FortPlaylistUIExtensionLoader.generated.h"

class AFortMinigame;
class AFortPlayerState;
class AFortVolume;
class APlayerState;
class UUserWidget;

UCLASS(Blueprintable)
class UFortPlaylistUIExtensionLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UObject*, UUserWidget*> ObjectBoundWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> OrphanWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> MinigameWidgets;
    
public:
    UFortPlaylistUIExtensionLoader();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateUIExtensions(AFortPlayerState* ClientState, AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleUpdateMinigameUIExtensions(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlaylistExtensionWidgetCreatedNotSupported(EUIExtensionSlot ExtensionSlot, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void HandleExitVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleEnteredVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleClearPlaylistExtensionWidgetNotSupported();
    
    UFUNCTION(BlueprintCallable)
    void ClearUIExtensions();
    
    UFUNCTION(BlueprintCallable)
    void BindVolumeEvents();
    
};

