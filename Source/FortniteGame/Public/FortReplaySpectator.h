#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EAthenaGamePhase.h"
#include "FortPlayerControllerSpectating.h"
#include "HighlightReel.h"
#include "ReplaySequenceComponentOwner.h"
#include "ServerHighlightsAvailableDelegateDelegate.h"
#include "FortReplaySpectator.generated.h"

class AFortPawn;
class AFortPlayerState;
class AFortPlayerStateAthena;
class AFortTimeOfDayManager;
class AUnicornDriver;
class UFortReplaySequenceComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortReplaySpectator : public AFortPlayerControllerSpectating, public IReplaySequenceComponentOwner {
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
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequencerLoadingScreenRevealTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUpdateReplayContextAboutSequencer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSequencerRetryFindPawnGraceTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FServerHighlightsAvailableDelegate OnServerHighlightsAvailableEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightAnnotationTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtendedGameHighlightsTargetSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameHighlightsTargetSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FeatureReelTargetSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightShotExtraLeadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnicornDriver* UnicornDriver;
    
public:
    AFortReplaySpectator();
    UFUNCTION(BlueprintCallable, Exec)
    void SkipToSequencerShot(int32 ShotIndex) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkipToNextSequencerShot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSetupUIForRecording() const;
    
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
    
    UFUNCTION(BlueprintCallable, Exec)
    void SequencerLoadAndPlayFile(const FString& SequenceFileName);
    
    UFUNCTION(BlueprintCallable)
    void PlayThroughHightlightReel(const FHighlightReel& Highlights);
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnReplayExtractionPreScrubComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStatePlacementChanged(AFortPlayerStateAthena* Sender, int32 InPlace);
    
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
    bool HasPermissionToViewHighlights() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortReplaySequenceComponent* GetSequencerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreReplayGameHighlightsAvailable() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

