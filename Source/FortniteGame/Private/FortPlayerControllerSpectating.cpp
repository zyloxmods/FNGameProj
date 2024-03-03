#include "FortPlayerControllerSpectating.h"
#include "AthenaMarkerComponent.h"
#include "FortReplaySpectatorPawnBase.h"
#include "FortSpectatorThirdPersonPawn.h"
#include "HoverDronePawn.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerControllerSpectating::ZoomIn(const float Val) {
}

void AFortPlayerControllerSpectating::UpdateReplayEvents(EPlayEventType Type) {
}

void AFortPlayerControllerSpectating::ToggleSpectatorHUD() {
}

void AFortPlayerControllerSpectating::SpectatorSpecialAction() {
}

void AFortPlayerControllerSpectating::SpectatorClearSavedCameraShots() {
}

void AFortPlayerControllerSpectating::SetShowVehiclesOnMap(bool bInShowVehiclesOnMap) {
}

void AFortPlayerControllerSpectating::SetShowPlayersOnMap(bool bInShowPlayersOnMap) {
}

void AFortPlayerControllerSpectating::SetShowBusPathsOnMap(bool bInShowBusPathsOnMap) {
}

void AFortPlayerControllerSpectating::SetNotificationsEnabled(bool bNewState) {
}

void AFortPlayerControllerSpectating::SetNewCameraType(ESpectatorCameraType NewCameraType, bool bReset) {
}

void AFortPlayerControllerSpectating::SetMapWeaponTracersEnabled(bool bEnable) {
}

void AFortPlayerControllerSpectating::SetFollowedPlayer(AFortPlayerState* NewPlayerToFollow) {
}

void AFortPlayerControllerSpectating::SetBlendType(EFortSpectatorBlendType NewBlendType) {
}

void AFortPlayerControllerSpectating::ResetCameraBoundsVolume() {
}

void AFortPlayerControllerSpectating::ResetCamera() {
}

void AFortPlayerControllerSpectating::ResetAllCameras() {
}

void AFortPlayerControllerSpectating::PlayerBecameRelevant(AFortPlayerState* FPS) {
}

void AFortPlayerControllerSpectating::OnRep_FollowedPlayerRemoteClientInfo() {
}

void AFortPlayerControllerSpectating::OnNextCameraMode() {
}

bool AFortPlayerControllerSpectating::JumpToHoveredActor() {
    return false;
}

bool AFortPlayerControllerSpectating::IsValidToFollow(AFortPlayerState* FPS) const {
    return false;
}

bool AFortPlayerControllerSpectating::IsPlayerInRelevancy(const AFortPlayerState* FPS) const {
    return false;
}

bool AFortPlayerControllerSpectating::IsFollowedPlayerInBus() const {
    return false;
}

bool AFortPlayerControllerSpectating::IsCameraBlending() const {
    return false;
}

bool AFortPlayerControllerSpectating::IsAllowedChangeCamera() {
    return false;
}

bool AFortPlayerControllerSpectating::HasBroadcasterToken() const {
    return false;
}

void AFortPlayerControllerSpectating::HandleTimelineScrubbed(UWorld* InWorld) {
}

void AFortPlayerControllerSpectating::HandleSquadIdModeChanged(ESpectatorSquadIdMode SquadIdMode) {
}

void AFortPlayerControllerSpectating::HandleNewNotificationRequest(const FText& NotificationText, const FNotificationUISettings& NotificationSettings) const {
}

bool AFortPlayerControllerSpectating::GetShowVehiclesOnMap() const {
    return false;
}

bool AFortPlayerControllerSpectating::GetShowPlayersOnMap() const {
    return false;
}

bool AFortPlayerControllerSpectating::GetShowBusPathsOnMap() const {
    return false;
}

UAthenaMarkerComponent* AFortPlayerControllerSpectating::GetMarkerComponent() const {
    return NULL;
}

bool AFortPlayerControllerSpectating::GetMapWeaponTracersEnabled() const {
    return false;
}

AFortPlayerState* AFortPlayerControllerSpectating::GetFollowedPlayer() const {
    return NULL;
}

UFortSpectatorCameraComponent* AFortPlayerControllerSpectating::GetCurrentSpectatorCameraComponent() const {
    return NULL;
}

EFortSpectatorBlendType AFortPlayerControllerSpectating::GetBlendType() const {
    return EFortSpectatorBlendType::None;
}

TMap<FUniqueNetIdRepl, AFortPlayerStateAthena*> AFortPlayerControllerSpectating::GetAddedPlayersMap() const {
    return TMap<FUniqueNetIdRepl, AFortPlayerStateAthena*>();
}

void AFortPlayerControllerSpectating::FullscreenMapZoom(float Value) {
}

void AFortPlayerControllerSpectating::FullScreenMapCursorStopDrag() {
}

void AFortPlayerControllerSpectating::FullScreenMapCursorStartDrag() {
}

void AFortPlayerControllerSpectating::FullScreenMapCursorMoved(const FVector2D& CursorWidgetLocation, const FVector2D& CursorDelta) {
}

void AFortPlayerControllerSpectating::FollowPrevTeamMember() {
}

void AFortPlayerControllerSpectating::FollowPrevSquadMember() {
}

void AFortPlayerControllerSpectating::FollowPrevPlayer() {
}

void AFortPlayerControllerSpectating::FollowPlayerByName(const FString& PlayerName) {
}

void AFortPlayerControllerSpectating::FollowNextTeamMember() {
}

void AFortPlayerControllerSpectating::FollowNextSquadMember() {
}

void AFortPlayerControllerSpectating::FollowNextPlayer() {
}

void AFortPlayerControllerSpectating::FollowLastDamagerOfViewTarget() {
}

bool AFortPlayerControllerSpectating::FollowHoveredPlayer() {
    return false;
}

AFortPlayerState* AFortPlayerControllerSpectating::FindPlayerStateByUID(const FUniqueNetIdRepl& UID) const {
    return NULL;
}

bool AFortPlayerControllerSpectating::CanRespawnAfterDeath() const {
    return false;
}

void AFortPlayerControllerSpectating::BlendCameraPlacement(const FTransform InTransform, const FTransform InTargetTransform, const float BlendDuration, const ESpectateBlendEasing InEasing) {
}

bool AFortPlayerControllerSpectating::AreNotificationsEnabled() const {
    return false;
}

void AFortPlayerControllerSpectating::AdjustNormalizedDistanceToPlayer(const float Val) {
}

void AFortPlayerControllerSpectating::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerControllerSpectating, FollowedPlayerRemoteClientInfo);
}

AFortPlayerControllerSpectating::AFortPlayerControllerSpectating() {
    this->CurrentCameraType = ESpectatorCameraType::ThirdPerson;
    this->CameraModeCycle.AddDefaulted(5);
    this->ZoomThresholdForPlayerNames = 1;
    this->SpectatorPostProcessMaterial = NULL;
    this->SpectatorPawnBaseClass = AFortReplaySpectatorPawnBase::StaticClass();
    this->ThirdPersonPawnBaseClass = AFortSpectatorThirdPersonPawn::StaticClass();
    this->HoverDronePawnClass = AHoverDronePawn::StaticClass();
    this->BattleMapPawnClass = NULL;
    this->ARDronePawnClass = NULL;
    this->MinimapIndicatorClass = NULL;
    this->SavedCameraStates.AddDefaulted(9);
    this->LastDamagerOfViewTarget = NULL;
    this->HoveredActor = NULL;
    this->FullScreenMapInputComponent = NULL;
    this->LastKnownViewTarget = NULL;
    this->CameraBoundsVolume = NULL;
    this->ClampDroneToCameraBoundsVolume = false;
    this->RelevancyZoneIndicatorClass = NULL;
    this->RelevancyZoneIndicator = NULL;
    this->ReplayContext = NULL;
    this->MarkerComponent = CreateDefaultSubobject<UAthenaMarkerComponent>(TEXT("MarkerComponent"));
    this->FollowedPlayerRemoteClientInfo = NULL;
}

