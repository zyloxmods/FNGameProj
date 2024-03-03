#include "AthenaCapturePoint.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

void AAthenaCapturePoint::SetActivatedState(bool bInActivated) {
}

void AAthenaCapturePoint::OnRep_ReplicatedCapturePercentage() {
}

void AAthenaCapturePoint::OnRep_IconMaterialIndexParameter() {
}

void AAthenaCapturePoint::OnRep_CaptureState() {
}

void AAthenaCapturePoint::OnRep_bPermanentShutdown() {
}

void AAthenaCapturePoint::OnRep_bLocked() {
}

void AAthenaCapturePoint::OnRep_bActivated() {
}

void AAthenaCapturePoint::OnLeaveCapturePoint(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAthenaCapturePoint::OnEnterCapturePoint(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAthenaCapturePoint::OnCapturePointStateChange_Implementation(ECapturePointState InState, uint8 InTeam) {
}

void AAthenaCapturePoint::OnCapturePointLockStateChange_Implementation(bool bInLocked) {
}

void AAthenaCapturePoint::OnCapturePointActiveStateChange_Implementation(bool bInActive) {
}

bool AAthenaCapturePoint::HasDancingPlayer() {
    return false;
}

int32 AAthenaCapturePoint::GetNumDancingPlayers() {
    return 0;
}

ECapturePointState AAthenaCapturePoint::GetCaptureState() const {
    return ECapturePointState::Idle;
}

void AAthenaCapturePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaCapturePoint, IconMaterialIndexParameter);
    DOREPLIFETIME(AAthenaCapturePoint, bPermanentShutdown);
    DOREPLIFETIME(AAthenaCapturePoint, bActivated);
    DOREPLIFETIME(AAthenaCapturePoint, bLocked);
    DOREPLIFETIME(AAthenaCapturePoint, NumCapturingPoint);
    DOREPLIFETIME(AAthenaCapturePoint, TeamCapturingPoint);
    DOREPLIFETIME(AAthenaCapturePoint, TeamControllingPoint);
    DOREPLIFETIME(AAthenaCapturePoint, TeamOwningPoint);
    DOREPLIFETIME(AAthenaCapturePoint, CaptureState);
    DOREPLIFETIME(AAthenaCapturePoint, ReplicatedCapturePercentage);
}

AAthenaCapturePoint::AAthenaCapturePoint() {
    this->HUDIndicatorMID = NULL;
    this->IconMaterialIndexParameter = 0;
    this->bPermanentShutdown = false;
    this->ShutdownTime = 1;
    this->HUDIndicatorRef = NULL;
    this->CapturePointMID_Neutral = NULL;
    this->CapturePointMID_AllyCaptured = NULL;
    this->CapturePointMID_AllyCapping = NULL;
    this->CapturePointMID_EnemyCaptured = NULL;
    this->CapturePointMID_EnemyCapping = NULL;
    this->bUseHUDIndicator = false;
    this->bHUDClampToScreenEdge = true;
    this->DistanceForMinHUDSize = 1;
    this->CapturePointMat_Neutral = NULL;
    this->CapturePointMat_AllyCaptured = NULL;
    this->CapturePointMat_AllyCapping = NULL;
    this->CapturePointMat_EnemyCaptured = NULL;
    this->CapturePointMat_EnemyCapping = NULL;
    this->StructuralComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("StructuralComponent"));
    this->CaptureComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CaptureComponent"));
    this->bActivated = true;
    this->ContentionRules = EContentionRuleType::MajorityWins;
    this->bSupportsPerPlayerCapturing = false;
    this->CachedPercentIncreasePerPlayerCaptor = 1;
    this->CachedBonusPercentIncreasePerPlayerCaptor = 1;
    this->CachedPercentDecreaseNoCaptor = 1;
    this->bLocked = false;
    this->UnlockInterval = 1;
    this->UnlockRules = ECapturePointUnlockRules::Reset;
    this->NumCapturingPoint = 0;
    this->TeamCapturingPoint = 0;
    this->TeamControllingPoint = 0;
    this->TeamInfoControllingPoint = NULL;
    this->TeamOwningPoint = 0;
    this->CaptureState = ECapturePointState::Idle;
    this->CapturePercentage = 1;
    this->ReplicatedCapturePercentage = 1;
}

