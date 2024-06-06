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
    BlockingCubeFaceOne = NULL;
    BlockingCubeFaceTwo = NULL;
    BlockingCubeFaceThree = NULL;
    BlockingCubeFaceFour = NULL;
    ObjectTrackingComponent = NULL;
    OverridePlayset = NULL;
    bNeverAllowSaving = false;
    bShowPublishWatermark = false;
    bDestroyingActors = false;
    bForceBoundsToBlock = false;
    CurrentPlayset = NULL;
    VolumeState = EVolumeState::Uninitialized;
    TaskQueue = NULL;
    AIGroupEncounterID = 0;
    MaxActiveAI = 0;
    NavInvokerClass = NULL;
    NavigationInvokerBox = NULL;
    BoundsShape = EVolumeShape::Sphere;
    BoundsCollisionSetting = ECollisionEnabled::NoCollision;
    bUserGeneratedContentRestricted = false;
}

