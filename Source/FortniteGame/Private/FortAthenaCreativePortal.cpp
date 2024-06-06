#include "FortAthenaCreativePortal.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaCreativePortal::UpdateThumbnail() {
}

void AFortAthenaCreativePortal::TeleportVehicle(AFortAthenaVehicle* Vehicle) {
}

void AFortAthenaCreativePortal::TeleportPlayerToLinkedVolume(AFortPlayerPawn* PlayerPawn, bool bUseSpawnTags) {
}

void AFortAthenaCreativePortal::TeleportPlayerForPlotLoadComplete(AFortPlayerPawn* PlayerPawn) {
}

void AFortAthenaCreativePortal::TeleportPlayer(AFortPlayerPawn* PlayerPawn, const FRotator& TeleportRotation) {
}

void AFortAthenaCreativePortal::StartedPlotLoadForUser(const FAsyncTaskResult& Result) {
}

void AFortAthenaCreativePortal::SetInteractionInteractComponent(UPrimitiveComponent* PrimitiveComponent) {
}

void AFortAthenaCreativePortal::SetInteractionDisplayWidget(UUserWidget* DisplayWidget) {
}

void AFortAthenaCreativePortal::SetHUDPointerOrigin(FVector NewPointerOrigin) {
}






void AFortAthenaCreativePortal::OnVolumeManagerUserGeneratedContentRestrictionsChanged(AFortVolume* Volume, bool bRestrictionEnabled) {
}

void AFortAthenaCreativePortal::OnUserGeneratedContentRestrictionsChanged(bool bRestrictionEnabled) {
}

void AFortAthenaCreativePortal::OnUnloadPlotComplete(const FAsyncTaskResult& Result) {
}


void AFortAthenaCreativePortal::OnRep_VolumeStatus() {
}

void AFortAthenaCreativePortal::OnRep_PublishedPortal() {
}

void AFortAthenaCreativePortal::OnRep_PortalOpen() {
}

void AFortAthenaCreativePortal::OnRep_PopulationChanged() {
}

void AFortAthenaCreativePortal::OnRep_PlayersReady() {
}

void AFortAthenaCreativePortal::OnRep_OwningPlayer() {
}

void AFortAthenaCreativePortal::OnRep_IslandInfo() {
}

void AFortAthenaCreativePortal::OnRep_ErrorState() {
}


void AFortAthenaCreativePortal::OnPlayerPawnTeleported(AFortPlayerPawn* PlayerPawn, bool bTeleportedToIslandStart) {
}

void AFortAthenaCreativePortal::OnClientLoadedStateChanged() {
}

void AFortAthenaCreativePortal::NotifyTeleportedVehicle_Implementation(AActor* VehicleActor) {
}


bool AFortAthenaCreativePortal::IsPortalOpen() const {
    return false;
}

bool AFortAthenaCreativePortal::IsPortalInteractable() const {
    return false;
}

FText AFortAthenaCreativePortal::GetVolumeDisplayName() const {
    return FText::GetEmpty();
}

FString AFortAthenaCreativePortal::GetVideoID() const {
    return TEXT("");
}

int32 AFortAthenaCreativePortal::GetThumbnailWidth() const {
    return 0;
}

int32 AFortAthenaCreativePortal::GetThumbnailHeight() const {
    return 0;
}

FText AFortAthenaCreativePortal::GetTagline() const {
    return FText::GetEmpty();
}

uint8 AFortAthenaCreativePortal::GetPopulation() const {
    return 0;
}

AFortPlayerStateAthena* AFortAthenaCreativePortal::GetPlayerState() {
    return NULL;
}

FString AFortAthenaCreativePortal::GetMnemonic() const {
    return TEXT("");
}

AFortVolume* AFortAthenaCreativePortal::GetLinkedVolume() const {
    return NULL;
}

bool AFortAthenaCreativePortal::GetIsPublishedPortal() const {
    return false;
}

FString AFortAthenaCreativePortal::GetIslandID() const {
    return TEXT("");
}

TArray<FCreativeIslandDescriptionTag> AFortAthenaCreativePortal::GetIslandDescriptionTags() const {
    return TArray<FCreativeIslandDescriptionTag>();
}

FString AFortAthenaCreativePortal::GetImageURL() const {
    return TEXT("");
}

FVector AFortAthenaCreativePortal::GetHUDPointerOrigin() {
    return FVector{};
}

TArray<FString> AFortAthenaCreativePortal::GetDescriptionTags() const {
    return TArray<FString>();
}

FText AFortAthenaCreativePortal::GetCreatorName() const {
    return FText::GetEmpty();
}

void AFortAthenaCreativePortal::FinishedReadingCloudFiles(const FAsyncTaskResult& Result) {
}




void AFortAthenaCreativePortal::ClientSaveStateChanged(bool bSaving) {
}


void AFortAthenaCreativePortal::CheckMinigameOnTeleportComplete(AFortPlayerPawn* PlayerPawn, bool bTeleportedToIslandStart) {
}



void AFortAthenaCreativePortal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaCreativePortal, bReturnToCreativeHub);
    DOREPLIFETIME(AFortAthenaCreativePortal, bInErrorState);
    DOREPLIFETIME(AFortAthenaCreativePortal, bUserInitiatedLoad);
    DOREPLIFETIME(AFortAthenaCreativePortal, IslandInfo);
    DOREPLIFETIME(AFortAthenaCreativePortal, VolumeStatus);
    DOREPLIFETIME(AFortAthenaCreativePortal, CurrentPopulation);
    DOREPLIFETIME(AFortAthenaCreativePortal, OwningPlayer);
    DOREPLIFETIME(AFortAthenaCreativePortal, PlayersReady);
    DOREPLIFETIME(AFortAthenaCreativePortal, bIsPublishedPortal);
    DOREPLIFETIME(AFortAthenaCreativePortal, TeleportLocation);
    DOREPLIFETIME(AFortAthenaCreativePortal, bPortalOpen);
}

AFortAthenaCreativePortal::AFortAthenaCreativePortal() {
    PortalIndex = 0;
    DestinationActor = NULL;
    MaxInstantTeleportDistance = 1;
    LinkedVolume = NULL;
    bReturnToCreativeHub = false;
    bInErrorState = false;
    bUserInitiatedLoad = false;
    InteractComponent = NULL;
    CurrentPopulation = 0;
    bIsPublishedPortal = false;
    bTeleportLocationIsIslandStart = false;
    bDisallowPortalInteract = false;
    bPortalOpen = false;
    CachedOwningPlayerState = NULL;
    ThumbnailTexture = NULL;
    bForceUpdateInteraction = false;
}

