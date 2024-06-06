#include "FortAthenaMutator_GameModeBase.h"

void AFortAthenaMutator_GameModeBase::OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags) {
}

void AFortAthenaMutator_GameModeBase::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_GameModeBase::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_GameModeBase::HandleEndMatchStingerWaitingOnPlacement_Local(AFortPlayerStateAthena* Sender, int32 NewPlace) {
}

FText AFortAthenaMutator_GameModeBase::GetPOINameForTag(const FGameplayTag& POITag) const {
    return FText::GetEmpty();
}

AFortAthenaMutator_GameModeBase::AFortAthenaMutator_GameModeBase() {
    bAutomaticallyFinishInitialization = true;
    StingerAudioComponent = NULL;
    StingerEventForwarder = NULL;
}

