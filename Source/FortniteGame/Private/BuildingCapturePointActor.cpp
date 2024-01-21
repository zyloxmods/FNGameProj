#include "BuildingCapturePointActor.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

void ABuildingCapturePointActor::SetActivatedState(bool bInActivated) {
}

void ABuildingCapturePointActor::OnRep_ReplicatedCapturePercentage() {
}

void ABuildingCapturePointActor::OnRep_CaptureState() {
}

void ABuildingCapturePointActor::OnRep_bLocked() {
}

void ABuildingCapturePointActor::OnRep_bActivated() {
}

void ABuildingCapturePointActor::OnLeaveCapturePoint(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABuildingCapturePointActor::OnEnterCapturePoint(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABuildingCapturePointActor::OnCapturePointStateChange_Implementation(ECaptureState InState, uint8 InTeam) {
}

void ABuildingCapturePointActor::OnCapturePointLockStateChange_Implementation(bool bInLocked) {
}

void ABuildingCapturePointActor::OnCapturePointActiveStateChange_Implementation(bool bInActive) {
}

ECaptureState ABuildingCapturePointActor::GetCaptureState() const {
    return ECaptureState::CS_Idle;
}

void ABuildingCapturePointActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingCapturePointActor, bActivated);
    DOREPLIFETIME(ABuildingCapturePointActor, bLocked);
    DOREPLIFETIME(ABuildingCapturePointActor, NumCapturingPoint);
    DOREPLIFETIME(ABuildingCapturePointActor, TeamCapturingPoint);
    DOREPLIFETIME(ABuildingCapturePointActor, TeamOwningPoint);
    DOREPLIFETIME(ABuildingCapturePointActor, CaptureState);
    DOREPLIFETIME(ABuildingCapturePointActor, ReplicatedCapturePercentage);
}

ABuildingCapturePointActor::ABuildingCapturePointActor() {
    this->bUseHUDIndicator = false;
    this->bHUDClampToScreenEdge = true;
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphereComponent"));
    this->bActivated = true;
    this->ContentionRules = EContentionRules::CR_MajorityWins;
    this->PercentIncreasePerPlayerCaptor = 0.10f;
    this->PercentIncreasePerAICaptor = 0.10f;
    this->PercentDecreaseNoCaptor = 0.25f;
    this->bLocked = false;
    this->UnlockInterval = 180.00f;
    this->UnlockRules = EUnlockRules::UR_Reset;
    this->NumCapturingPoint = 0;
    this->TeamCapturingPoint = 0;
    this->TeamControllingPoint = 0;
    this->TeamOwningPoint = 0;
    this->CapturePercentage = 0.00f;
    this->ReplicatedCapturePercentage = 0.00f;
}

