#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EAthenaGamePhase.h"
#include "FortPlayerControllerSpectating.h"
#include "FortReplaySpectator.generated.h"

class AFortPawn;
class AFortPlayerState;
class AFortTimeOfDayManager;
class UFortReplaySequenceComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortReplaySpectator : public AFortPlayerControllerSpectating {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PlaybackSpeedLUT;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl FollowedPlayerUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerState* FollowedPlayerPrivate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortTimeOfDayManager* OverriddenTODManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortReplaySequenceComponent* SequencerComponent;
    
public:
    AFortReplaySpectator();
    UFUNCTION(BlueprintCallable)
    bool SetOverrideTimeOfDay(bool bOverride, float Time, bool bImmediate);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetCloudAltitudes(float NewCloudAltitude);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanStreamBuildingFoundationsIn(bool bCanStream);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowTimeDilation(bool bAllow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoomOutEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoomOutBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoomInEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoomInBegin();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnShotStartGotoTimeComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnScrubComplete(bool bWasSuccessful);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnForReplayRelevancyChanged(AFortPawn* NewRelevancyPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPauseStateChanged(bool bNewPauseState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyNewPlaybackMultiplier(float NewMultiplier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDemoScrubComplete(bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnicornVideoRecordingActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortReplaySequenceComponent* GetSequencerComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableStableReplayPlayback();
    
};

