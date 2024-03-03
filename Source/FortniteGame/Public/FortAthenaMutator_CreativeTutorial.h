#pragma once
#include "CoreMinimal.h"
#include "AthenaGameMessageData.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_CreativeTutorial.generated.h"

class AFortVolume;
class APlayerState;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_CreativeTutorial : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_LandOnHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_LandOnIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_IslandMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_BackToHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_ExploreFriendsIslands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_Permissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData ServerShutdownInitiated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenInventoryTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenReturnToCreativeHubTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenMyIslandTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenWelcomeTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenPermissionsTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanShowMyIslandMessage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ServerShutdownTimeRemaining;
    
    AFortAthenaMutator_CreativeTutorial();
protected:
    UFUNCTION(BlueprintCallable)
    void StartTrackingEndSkydiving();
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeManagerReplicated();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinedCreativeIsland();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCreativeVolumeChanged(AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
    UFUNCTION(BlueprintCallable)
    void OnEndSkydiving();
    
    UFUNCTION(BlueprintCallable)
    void OnActorEnteredVolume(APlayerState* PS, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void DisplayBackToHubMessage();
    
};

