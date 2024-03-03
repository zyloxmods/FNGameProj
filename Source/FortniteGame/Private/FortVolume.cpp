#include "FortVolume.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortVolume::SetCurrentPlayset(UFortPlaysetItemDefinition* NewPlayset) {
}

void AFortVolume::SetBlockingVolumeCollision(const TEnumAsByte<ECollisionEnabled::Type> CollisionSetting) {
}

void AFortVolume::ServerClearVolume_Implementation() {
}
bool AFortVolume::ServerClearVolume_Validate() {
    return true;
}

void AFortVolume::RemoveAthenaPawnWhenDied(AFortPlayerPawnAthena* FortPlayerPawnAthena) {
}

void AFortVolume::RemoveActorWhenEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AFortVolume::RemoveActorWhenDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortVolume::RemoveActorFromEndOverlap(AActor* MyActor, AActor* ActorToRemove) {
}

void AFortVolume::OnRep_VolumeState() {
}

void AFortVolume::OnRep_UserGeneratedContentRestrictions() {
}

void AFortVolume::OnRep_ObjectTrackingComponent() {
}

void AFortVolume::OnRep_CurrentPlayset() {
}

void AFortVolume::OnRep_bShowPublishWatermark() {
}

void AFortVolume::OnRep_BoundsCollisionSetting() {
}

bool AFortVolume::IsReady() const {
    return false;
}

bool AFortVolume::IsReadOnly() const {
    return false;
}

bool AFortVolume::IsPlayerAllowedInVolume(AFortPlayerController* NewUser) {
    return false;
}

bool AFortVolume::HasVolumeBoundsBlocked() const {
    return false;
}

bool AFortVolume::GetUserGeneratedContentRestricted() const {
    return false;
}

UStaticMeshComponent* AFortVolume::GetStaticMesh() const {
    return NULL;
}

int32 AFortVolume::GetNumPlayersInVolume() const {
    return 0;
}

EFortVolumeType AFortVolume::GetFortVolumeType() const {
    return EFortVolumeType::None;
}

UFortPlaysetItemDefinition* AFortVolume::GetCurrentPlayset() const {
    return NULL;
}

TArray<AActor*> AFortVolume::GetActorsWithinVolumeByClass(TSubclassOf<AActor> ActorClass) const {
    return TArray<AActor*>();
}

void AFortVolume::DestroyVolume() {
}

void AFortVolume::DeferredDestroy_Helper() {
}

void AFortVolume::BroadcastOnFinishClear_Internal() {
}

void AFortVolume::AddSelfToVolumeManager() {
}

void AFortVolume::AddOrRemovePawnAfterVehicleChange(AFortPlayerPawn* FortPawn, AActor* NewVehicle, AActor* OldVehicle) {
}

void AFortVolume::AddActorFromBeginOverlap(AActor* MyActor, AActor* ActorToAdd) {
}

void AFortVolume::AddActor(AActor* ActorToAdd) {
}

void AFortVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortVolume, ObjectTrackingComponent);
    DOREPLIFETIME(AFortVolume, bNeverAllowSaving);
    DOREPLIFETIME(AFortVolume, bShowPublishWatermark);
    DOREPLIFETIME(AFortVolume, CurrentPlayset);
    DOREPLIFETIME(AFortVolume, VolumeState);
    DOREPLIFETIME(AFortVolume, BoundsCollisionSetting);
    DOREPLIFETIME(AFortVolume, bUserGeneratedContentRestricted);
}

AFortVolume::AFortVolume() {
    this->BlockingCubeFaceOne = NULL;
    this->BlockingCubeFaceTwo = NULL;
    this->BlockingCubeFaceThree = NULL;
    this->BlockingCubeFaceFour = NULL;
    this->ObjectTrackingComponent = NULL;
    this->OverridePlayset = NULL;
    this->bNeverAllowSaving = false;
    this->bShowPublishWatermark = false;
    this->bDestroyingActors = false;
    this->bForceBoundsToBlock = false;
    this->CurrentPlayset = NULL;
    this->VolumeState = EVolumeState::Uninitialized;
    this->TaskQueue = NULL;
    this->AIGroupEncounterID = 0;
    this->MaxActiveAI = 0;
    this->NavInvokerClass = NULL;
    this->NavigationInvokerBox = NULL;
    this->BoundsShape = EVolumeShape::Sphere;
    this->BoundsCollisionSetting = ECollisionEnabled::NoCollision;
    this->bUserGeneratedContentRestricted = false;
}

