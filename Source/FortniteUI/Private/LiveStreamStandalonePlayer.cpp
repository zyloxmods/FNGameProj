#include "LiveStreamStandalonePlayer.h"

void ULiveStreamStandalonePlayer::UnblockPlayer(ELiveStreamStandaloneBlocked BlockedReason) {
}

void ULiveStreamStandalonePlayer::Stop() {
}

void ULiveStreamStandalonePlayer::SetPIPStartTime(float InStartTime) {
}

void ULiveStreamStandalonePlayer::SetPIPMediaID(const FString& InVideoUID) {
}

void ULiveStreamStandalonePlayer::SetPIPLive(bool bInLive) {
}

void ULiveStreamStandalonePlayer::SetPIPCDNDistribution(const TArray<float>& Weights) {
}

void ULiveStreamStandalonePlayer::ResetPIPState() {
}

void ULiveStreamStandalonePlayer::Play() {
}

void ULiveStreamStandalonePlayer::OnRetrieveVideoUrlSuccess(const FString& URL) {
}

void ULiveStreamStandalonePlayer::OnRetrieveVideoUrlFailure(const FString& URL) {
}

bool ULiveStreamStandalonePlayer::GetPlayerIsBlocked() {
    return false;
}

void ULiveStreamStandalonePlayer::FireStandalonePIPAnalytics(bool bInStarted) {
}

void ULiveStreamStandalonePlayer::CheckMediaStarted() {
}

void ULiveStreamStandalonePlayer::BlockPlayer(ELiveStreamStandaloneBlocked BlockedReason) {
}

ULiveStreamStandalonePlayer::ULiveStreamStandalonePlayer() : UUserWidget(FObjectInitializer::Get()) {
    this->StreamMediaSource = NULL;
    this->VideoPlayerWidget = NULL;
}

