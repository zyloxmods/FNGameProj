#include "KeepHeart.h"
#include "Net/UnrealNetwork.h"

bool AKeepHeart::UpgradeAllPermaniteStructures(AFortPlayerController* FortPC, bool bQuickUpgrade) {
    return false;
}

void AKeepHeart::StreamOutWorld() {
}

void AKeepHeart::StreamInWorld() {
}

void AKeepHeart::StartVote(FText VoteText, FText YesText, FText NoText, float PercentageToPass, bool bSkipIfOnePlayerOnly) {
}

void AKeepHeart::SetPermaniteAvailability(bool bAvailable) {
}

void AKeepHeart::RestoreKeepHealth() {
}

void AKeepHeart::RestoreContainers() {
}

void AKeepHeart::ResetContainers() {
}



void AKeepHeart::OnDefenseLevelChanged() {
}

void AKeepHeart::NotifyEncounterStarted(UFortAIEncounterInfo* StartedEncounter) {
}

void AKeepHeart::NotifyEncounterEnded(UFortAIEncounterInfo* EndedEncounter) {
}

bool AKeepHeart::IsWorldStreamingIn() {
    return false;
}

bool AKeepHeart::IsWorldStreamedIn() {
    return false;
}


void AKeepHeart::HandleVoteComplete(bool bResult) {
}

float AKeepHeart::GetWorldStreamingInProgress() {
    return 0.0f;
}

int32 AKeepHeart::GetUpgradeAllPermaniteCost(AFortPlayerController* FortPC, bool bQuickUpgrade) {
    return 0;
}


float AKeepHeart::GetAveragePermaniteLevel() {
    return 0.0f;
}

bool AKeepHeart::DestroyNonPermaniteStructures() {
    return false;
}

void AKeepHeart::DelayedVoteSuccess() {
}

void AKeepHeart::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKeepHeart, DefenseState);
}

AKeepHeart::AKeepHeart() {
    this->DecorationRoomPlacement = NULL;
    this->PermaniteHealEffect = NULL;
    this->PermaniteWallWeight = 1.00f;
    this->PermaniteFloorWeight = 0.02f;
    this->PermaniteStairWeight = 0.02f;
    this->PermaniteRoofWeight = 0.10f;
    this->DefenseState = EKeepDefenseState::Inactive;
}

