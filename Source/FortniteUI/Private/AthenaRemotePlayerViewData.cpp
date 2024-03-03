#include "AthenaRemotePlayerViewData.h"

void UAthenaRemotePlayerViewData::UpdatePlayerPawn() {
}

void UAthenaRemotePlayerViewData::UpdateDistanceToStorm() {
}

void UAthenaRemotePlayerViewData::SetPlayerState(AFortPlayerStateAthena* InPlayerState) {
}

float UAthenaRemotePlayerViewData::GetVehicleMaxHealth() const {
    return 0.0f;
}

float UAthenaRemotePlayerViewData::GetVehicleHealthPercent() const {
    return 0.0f;
}

float UAthenaRemotePlayerViewData::GetVehicleHealth() const {
    return 0.0f;
}

AActor* UAthenaRemotePlayerViewData::GetVehicle() const {
    return NULL;
}

FLinearColor UAthenaRemotePlayerViewData::GetTeamColor() const {
    return FLinearColor{};
}

uint8 UAthenaRemotePlayerViewData::GetSquadID() const {
    return 0;
}

float UAthenaRemotePlayerViewData::GetShieldPercent() const {
    return 0.0f;
}

void UAthenaRemotePlayerViewData::GetShield(float& Shield, float& ShieldMax) const {
}

FUniqueNetIdRepl UAthenaRemotePlayerViewData::GetPlayerUID() const {
    return FUniqueNetIdRepl{};
}

AFortPlayerStateAthena* UAthenaRemotePlayerViewData::GetPlayerState() const {
    return NULL;
}

AFortPlayerPawn* UAthenaRemotePlayerViewData::GetPlayerPawn() const {
    return NULL;
}

FString UAthenaRemotePlayerViewData::GetPlayerName() const {
    return TEXT("");
}

int32 UAthenaRemotePlayerViewData::GetPlace() const {
    return 0;
}

int32 UAthenaRemotePlayerViewData::GetMaterialCount() const {
    return 0;
}

FString UAthenaRemotePlayerViewData::GetLocation() const {
    return TEXT("");
}

int32 UAthenaRemotePlayerViewData::GetKillScore() const {
    return 0;
}

bool UAthenaRemotePlayerViewData::GetIsReplayRelevancyPlayer() const {
    return false;
}

bool UAthenaRemotePlayerViewData::GetIsInRelevancy() const {
    return false;
}

bool UAthenaRemotePlayerViewData::GetIsFollowedPlayer() const {
    return false;
}

bool UAthenaRemotePlayerViewData::GetIsEliminated() const {
    return false;
}

bool UAthenaRemotePlayerViewData::GetIsDrivingVehicle() const {
    return false;
}

bool UAthenaRemotePlayerViewData::GetIsDisconnected() const {
    return false;
}

bool UAthenaRemotePlayerViewData::GetIsDead() const {
    return false;
}

bool UAthenaRemotePlayerViewData::GetIsDBNO() const {
    return false;
}

bool UAthenaRemotePlayerViewData::GetIsBeingRevived() const {
    return false;
}

bool UAthenaRemotePlayerViewData::GetInAircraft() const {
    return false;
}

float UAthenaRemotePlayerViewData::GetHealthPercent() const {
    return 0.0f;
}

void UAthenaRemotePlayerViewData::GetHealth(float& Health, float& HealthMax) const {
}

int32 UAthenaRemotePlayerViewData::GetDistanceToStorm() const {
    return 0;
}

AFortWeapon* UAthenaRemotePlayerViewData::GetCurrentWeapon() const {
    return NULL;
}

void UAthenaRemotePlayerViewData::ForwardOnWeaponChanged(AFortWeapon* InNewWeapon, AFortWeapon* InPrevWeapon) {
}

void UAthenaRemotePlayerViewData::ForwardOnVehicleStateChanged(AFortPlayerPawn* PlayerPawn, AActor* NewVehicle, AActor* OldVehicle) {
}

void UAthenaRemotePlayerViewData::ForwardOnVehicleHealthChanged() {
}

void UAthenaRemotePlayerViewData::ForwardOnSquadIdChanged(uint8 InSquadId) {
}

void UAthenaRemotePlayerViewData::ForwardOnPlayerNameChanged(AFortPlayerStateAthena* InPlayerState, const FString& InPlayerName) {
}

void UAthenaRemotePlayerViewData::ForwardOnPlaceChanged(AFortPlayerStateAthena* Sender, int32 InPlace) {
}

void UAthenaRemotePlayerViewData::ForwardOnLocationChanged(const FString& InLocation) {
}

void UAthenaRemotePlayerViewData::ForwardOnKillScoreChanged(AFortPlayerStateAthena* InPlayerState, int32 InKillScore) {
}

void UAthenaRemotePlayerViewData::ForwardOnHitPointsStateChanged(AFortPlayerStateAthena* InPlayerState, float InHealth, float InHealthMax, float InShield, float InShieldMax) {
}

void UAthenaRemotePlayerViewData::ForwardOnDisconnectedChanged(AFortPlayerStateAthena* InPlayerState, bool bInIsDisconnected) {
}

void UAthenaRemotePlayerViewData::ForwardOnDeadStateChanged(AFortPlayerStateAthena* InPlayerState, bool bInIsDead) {
}

void UAthenaRemotePlayerViewData::ForwardOnDBNOStateChanged(AFortPlayerStateAthena* InPlayerState, bool bInIsDBNO) {
}

void UAthenaRemotePlayerViewData::ForwardOnBeingRevivedStateChanged(AFortPlayerStateAthena* InPlayerState, bool bInIsBeingRevived) {
}

UAthenaRemotePlayerViewData::UAthenaRemotePlayerViewData() {
    this->PlayerState = NULL;
    this->CachedPlayerPawn = NULL;
}

