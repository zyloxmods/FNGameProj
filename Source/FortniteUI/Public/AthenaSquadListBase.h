#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortMinigameState.h"
#include "Components/SlateWrapperTypes.h"
#include "FortHUDElementWidget.h"
#include "AthenaSquadListBase.generated.h"

class AFortMinigame;
class AFortPlayerStateAthena;
class AFortVolume;
class APlayerState;
class UAthenaPlayerInfoBase;
class UAthenaPlayerViewModel;
class UDynamicEntryBox;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaSquadListBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility LocalPlayerVisibility;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaPlayerInfoBase* LocalPlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_SquadList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* CachedPlayerVM;
    
public:
    UAthenaSquadListBase();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSquadFromMinigameOptionChange();
    
    UFUNCTION(BlueprintCallable)
    void UpdateIsTeamMiniGameOnMinigameVolumeChanged(AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIsTeamMiniGameOnGameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadMemberDisconnected(const AFortPlayerStateAthena* Player);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerUniqueIdReplicated(const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerExitVolume(APlayerState* Client, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerEnterVolume(APlayerState* Client, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameMemberChanged(uint8 InSquadId, uint8 InTeamIndex, AFortPlayerStateAthena* ChangedPS);
    
};

