#include "HydrogenObjectiveActor.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"

void AHydrogenObjectiveActor::WaitForMutator() {
}

void AHydrogenObjectiveActor::SetUpMaterialInstanceDynamic(FSlateBrush& MapIconBrush, UMaterialInstanceDynamic*& DrawBrushMID) {
}

void AHydrogenObjectiveActor::SetActive(bool bInIsActive) {
}

void AHydrogenObjectiveActor::ProcessOverlap(AActor* OtherActor) {
}


void AHydrogenObjectiveActor::OnTimelineFlashing(float IconOpacity) {
}

void AHydrogenObjectiveActor::OnRep_TeamsOnCapturePoint() {
}

void AHydrogenObjectiveActor::OnRep_OwningTeam() {
}

void AHydrogenObjectiveActor::OnRep_HydrogenCaptureStateEnum() {
}

void AHydrogenObjectiveActor::OnRep_bIsActive() {
}

void AHydrogenObjectiveActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHydrogenObjectiveActor::OnMutatorAvailable() {
}

void AHydrogenObjectiveActor::OnComponentBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

bool AHydrogenObjectiveActor::GetIsActive() const {
    return false;
}

void AHydrogenObjectiveActor::FlashIcon() {
}

void AHydrogenObjectiveActor::CheckForStorm() {
}

void AHydrogenObjectiveActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHydrogenObjectiveActor, CaptureProgress);
    DOREPLIFETIME(AHydrogenObjectiveActor, CapturingTeam);
    DOREPLIFETIME(AHydrogenObjectiveActor, OwningTeam);
    DOREPLIFETIME(AHydrogenObjectiveActor, bBeenCaptured);
    DOREPLIFETIME(AHydrogenObjectiveActor, PreviousOwningTeam);
    DOREPLIFETIME(AHydrogenObjectiveActor, HydrogenCaptureStateEnum);
    DOREPLIFETIME(AHydrogenObjectiveActor, TeamsOnCapturePoint);
    DOREPLIFETIME(AHydrogenObjectiveActor, bIsInStormShield);
    DOREPLIFETIME(AHydrogenObjectiveActor, bIsActive);
}

AHydrogenObjectiveActor::AHydrogenObjectiveActor() {
    this->CaptureProgress = 1;
    this->CapturingTeam = 255;
    this->OwningTeam = 255;
    this->bBeenCaptured = false;
    this->PreviousOwningTeam = 0;
    this->HydrogenCaptureStateEnum = EHydrogenCaptureStateEnum::Contested;
    this->NumberOfPlayersOnPoint = 0;
    this->NumberOfTeamsOnPoint = 0;
    this->TeamsOnCapturePoint.AddDefaulted(2);
    this->MaxPlayerMultiplier = 0;
    this->UpdateTime = 1;
    this->CaptureCollisionName = TEXT("CaptureCollision");
    this->TextScale = 1;
    this->CompassMaxPawnDistanceForScaling = 1;
    this->CompassYOffset = 1;
    this->EnemyCapturing_DrawBrushMID = NULL;
    this->AllyCapturing_DrawBrushMID = NULL;
    this->bIsInStormShield = false;
    this->IconFlashTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("IconFlashTimeline"));
    this->IconFlashCurve = NULL;
    this->CheckForStormRate = 1;
    this->CachedGameState = NULL;
    this->CachedMutator = NULL;
    this->bIsActive = false;
    this->CaptureCollisionComponent = NULL;
}

