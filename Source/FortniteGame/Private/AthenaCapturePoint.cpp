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
    HUDIndicatorMID = NULL;
    IconMaterialIndexParameter = 0;
    bPermanentShutdown = false;
    ShutdownTime = 1;
    HUDIndicatorRef = NULL;
    CapturePointMID_Neutral = NULL;
    CapturePointMID_AllyCaptured = NULL;
    CapturePointMID_AllyCapping = NULL;
    CapturePointMID_EnemyCaptured = NULL;
    CapturePointMID_EnemyCapping = NULL;
    bUseHUDIndicator = false;
    bHUDClampToScreenEdge = true;
    DistanceForMinHUDSize = 1;
    CapturePointMat_Neutral = NULL;
    CapturePointMat_AllyCaptured = NULL;
    CapturePointMat_AllyCapping = NULL;
    CapturePointMat_EnemyCaptured = NULL;
    CapturePointMat_EnemyCapping = NULL;
    StructuralComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("StructuralComponent"));
    CaptureComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CaptureComponent"));
    bActivated = true;
    ContentionRules = EContentionRuleType::MajorityWins;
    bSupportsPerPlayerCapturing = false;
    CachedPercentIncreasePerPlayerCaptor = 1;
    CachedBonusPercentIncreasePerPlayerCaptor = 1;
    CachedPercentDecreaseNoCaptor = 1;
    bLocked = false;
    UnlockInterval = 1;
    UnlockRules = ECapturePointUnlockRules::Reset;
    NumCapturingPoint = 0;
    TeamCapturingPoint = 0;
    TeamControllingPoint = 0;
    TeamInfoControllingPoint = NULL;
    TeamOwningPoint = 0;
    CaptureState = ECapturePointState::Idle;
    CapturePercentage = 1;
    ReplicatedCapturePercentage = 1;
}

