#include "FortAthenaMutator_Cobalt.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Cobalt::UpdateStormEyeVisuals() {
}

void AFortAthenaMutator_Cobalt::TeleportPlayerLoadComplete(AFortPlayerPawn* FortPlayerPawn) {
}

void AFortAthenaMutator_Cobalt::OnRep_WidgetRoundData() {
}

void AFortAthenaMutator_Cobalt::OnRep_TeleportComplete() {
}

void AFortAthenaMutator_Cobalt::OnRep_TeamWinners() {
}

void AFortAthenaMutator_Cobalt::OnRep_RoundStartWidgetSequenceRunning() {
}

void AFortAthenaMutator_Cobalt::OnRep_CombatStormShieldArray() {
}

void AFortAthenaMutator_Cobalt::OnRep_bIsFinishedDisplayingRoundEndUI() {
}

void AFortAthenaMutator_Cobalt::OnRep_bClientPlaylistTimerStarted() {
}

void AFortAthenaMutator_Cobalt::OnRep_ActiveRound() {
}

void AFortAthenaMutator_Cobalt::HandleTeleportComplete() {
}

void AFortAthenaMutator_Cobalt::HandlePlayerStateTeleportComplete(AFortPlayerStateAthena* FortPlayerState) {
}

int32 AFortAthenaMutator_Cobalt::GetFinalRoundIndex() const {
    return 0;
}

void AFortAthenaMutator_Cobalt::ClientCobaltRoundTimerComplete() {
}

void AFortAthenaMutator_Cobalt::AudioFadeChangeEvent(bool bFadeOut, float FadeTime) {
}

void AFortAthenaMutator_Cobalt::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, bTeleportComplete);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, bRoundStartWidgetSequenceRunning);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, CombatStormShieldArray);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, ActiveRound);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, bIsCobaltFinished);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, FirstRound);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, TeamWinners);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, TeamLosers);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, bClientPlaylistTimerStarted);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, WidgetRoundData);
    DOREPLIFETIME(AFortAthenaMutator_Cobalt, bIsFinishedDisplayingRoundEndUI);
}

AFortAthenaMutator_Cobalt::AFortAthenaMutator_Cobalt() {
    StormShieldClass = NULL;
    DelayBeforeRoundEndDeathAndStinger = 1;
    DelayBeforeShowingRoundEndUI = 1;
    bRespawnEnabled = false;
    RespawnFallbackHeight = 1;
    RespawnTraceEnd = 1;
    MinimapMPC = NULL;
    POICameraViewPhaseDuration = 1;
    PreRoundDisplayDelay = 1;
    PreRoundDisplayDuration = 1;
    RoundStartWidgetSequenceAdditionalDelay = 1;
    UILastManStandingDisplayTime = 1;
    StormShieldShrinkBeginSound = NULL;
    VictoryStingerSound = NULL;
    LoserStingerSound = NULL;
    RoundEndStingerFadeDuration = 1;
    DeathEffectsComponentClass = NULL;
    bShouldSkipWinLossScreen = true;
    InventoryOverrideMutator = NULL;
    TimeDilationManager = NULL;
    EndRoundTimeDilationCurve = NULL;
    EndRoundTimeDilationDuration = 1;
    SafeZoneMaterialCollection = NULL;
    SafeZoneLocMaterialParamName = TEXT("SafeZoneLoc");
    SafeZoneScaleMaterialParamName = TEXT("SafeZoneScale");
    SafeZoneRadiusAtMaxSafeZoneScale = 1;
    StormEyeActorClass = NULL;
    bTeleportComplete = true;
    bRoundStartWidgetSequenceRunning = false;
    TeleportMutator = NULL;
    ActiveRound = 0;
    bIsCobaltFinished = false;
    FirstRound = 0;
    bClientPlaylistTimerStarted = false;
    RoundEndStingerInstance = NULL;
    bIsFinishedDisplayingRoundEndUI = false;
    StormEyeActor = NULL;
}

