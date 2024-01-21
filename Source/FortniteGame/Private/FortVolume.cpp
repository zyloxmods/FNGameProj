#include "FortVolume.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AFortVolume::UpdateSize(const FVector& NewScale) {
}

void AFortVolume::SetCurrentPlayset(UFortPlaysetItemDefinition* NewPlayset) {
}

void AFortVolume::SetBlockingVolumeCollision(const TEnumAsByte<ECollisionEnabled::Type> CollisionSetting) {
}

void AFortVolume::ServerClearVolume_Implementation() {
}
bool AFortVolume::ServerClearVolume_Validate() {
    return true;
}

void AFortVolume::PushAllPlayersOutsideVolume() {
}

void AFortVolume::OnRep_VolumeState() {
}

void AFortVolume::OnRep_CurrentPlayset() {
}

void AFortVolume::OnRep_BudgetTracker() {
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

int32 AFortVolume::GetNumPlayersInVolume() const {
    return 0;
}

UFortPlaysetItemDefinition* AFortVolume::GetCurrentPlayset() const {
    return NULL;
}

void AFortVolume::DestroyVolume() {
}

void AFortVolume::DeferredDestroy_Helper() {
}

void AFortVolume::BroadcastOnFinishClear_Internal() {
}

void AFortVolume::BoundsMeshLeft(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortVolume::BoundsMeshEntered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFortVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortVolume, bNeverAllowSaving);
    DOREPLIFETIME(AFortVolume, bShowPublishWatermark);
    DOREPLIFETIME(AFortVolume, CurrentPlayset);
    DOREPLIFETIME(AFortVolume, VolumeState);
    DOREPLIFETIME(AFortVolume, BudgetTracker);
    DOREPLIFETIME(AFortVolume, TransientTracker);
}

AFortVolume::AFortVolume() {
    this->BoundsMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoundsMesh"));
    this->BlockingCubeFaceOne = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockingCubeFaceOne"));
    this->BlockingCubeFaceTwo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockingCubeFaceTwo"));
    this->BlockingCubeFaceThree = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockingCubeFaceThree"));
    this->BlockingCubeFaceFour = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockingCubeFaceFour"));
    this->VolumeDefaultExitingTimeDelay = 5;
    this->ExitingTimeDelay = 5;
    this->OverridePlayset = NULL;
    this->bNeverAllowSaving = false;
    this->bShowPublishWatermark = false;
    this->bDestroyingActors = false;
    this->CurrentPlayset = NULL;
    this->VolumeState = EVolumeState::Uninitialized;
    this->TaskQueue = NULL;
    this->AIGroupEncounterID = 0;
    this->MaxActiveAI = 21;
    this->NavInvokerClass = NULL;
    this->NavigationInvokerBox = NULL;
}

