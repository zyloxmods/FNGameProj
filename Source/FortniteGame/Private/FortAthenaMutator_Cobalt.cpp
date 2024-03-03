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
    this->StormShieldClass = NULL;
    this->DelayBeforeRoundEndDeathAndStinger = 1;
    this->DelayBeforeShowingRoundEndUI = 1;
    this->bRespawnEnabled = false;
    this->RespawnFallbackHeight = 1;
    this->RespawnTraceEnd = 1;
    this->MinimapMPC = NULL;
    this->POICameraViewPhaseDuration = 1;
    this->PreRoundDisplayDelay = 1;
    this->PreRoundDisplayDuration = 1;
    this->RoundStartWidgetSequenceAdditionalDelay = 1;
    this->UILastManStandingDisplayTime = 1;
    this->StormShieldShrinkBeginSound = NULL;
    this->VictoryStingerSound = NULL;
    this->LoserStingerSound = NULL;
    this->RoundEndStingerFadeDuration = 1;
    this->DeathEffectsComponentClass = NULL;
    this->bShouldSkipWinLossScreen = true;
    this->InventoryOverrideMutator = NULL;
    this->TimeDilationManager = NULL;
    this->EndRoundTimeDilationCurve = NULL;
    this->EndRoundTimeDilationDuration = 1;
    this->SafeZoneMaterialCollection = NULL;
    this->SafeZoneLocMaterialParamName = TEXT("SafeZoneLoc");
    this->SafeZoneScaleMaterialParamName = TEXT("SafeZoneScale");
    this->SafeZoneRadiusAtMaxSafeZoneScale = 1;
    this->StormEyeActorClass = NULL;
    this->bTeleportComplete = true;
    this->bRoundStartWidgetSequenceRunning = false;
    this->TeleportMutator = NULL;
    this->ActiveRound = 0;
    this->bIsCobaltFinished = false;
    this->FirstRound = 0;
    this->bClientPlaylistTimerStarted = false;
    this->RoundEndStingerInstance = NULL;
    this->bIsFinishedDisplayingRoundEndUI = false;
    this->StormEyeActor = NULL;
}

