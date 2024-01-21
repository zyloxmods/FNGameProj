#include "FortTrack.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"


void AFortTrack::OnRep_SwitchState() {
}

void AFortTrack::OnRep_NeighborsByDirection() {
}

void AFortTrack::OnRep_ConfigurationIdx() {
}


bool AFortTrack::IsConnectedToTrackList(const TArray<AFortTrack*>& TargetTracks) {
    return false;
}

bool AFortTrack::IsConnectedToTrack(AFortTrack* TargetTrack) {
    return false;
}

void AFortTrack::InitializeTrack(UPrimitiveComponent* InSwitchComp) {
}

void AFortTrack::GetSplineFromPositionAndOrientation(const FVector& InLocation, const FRotator& InRotation, USplineComponent*& OutSpline, float& OutDistanceAlongSpline, bool& OutReverseDirection) {
}

void AFortTrack::GetSplineFromIncomingNeighbor(AFortTrack* InNeighbor, USplineComponent*& OutSpline, bool& OutReverseDirection) {
}

float AFortTrack::GetPathDistanceToTrack(AFortTrack* TargetTrack, USplineComponent* InCurrentSpline, float CurrentDistanceAlongSpline, bool InReverseDirection) {
    return 0.0f;
}

void AFortTrack::GetOutgoingNeighborFromSpline(USplineComponent* InSpline, bool InReverseDirection, AFortTrack*& OutNeighbor) {
}

void AFortTrack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTrack, NeighborsByDirection);
    DOREPLIFETIME(AFortTrack, SwitchState);
    DOREPLIFETIME(AFortTrack, ConfigurationIdx);
}

AFortTrack::AFortTrack() {
    this->ToggleSwitchText = FText::FromString(TEXT("Toggle Track"));
    this->ToggleInteractTime = 0.25f;
    this->TrackPieceMeshesByType[0] = NULL;
    this->TrackPieceMeshesByType[1] = NULL;
    this->TrackPieceMeshesByType[2] = NULL;
    this->TrackPieceMeshesByType[3] = NULL;
    this->TrackPieceMeshesByType[4] = NULL;
    this->bUseFloorMesh = true;
    this->TrackFloorMeshesByVerticality[0] = NULL;
    this->TrackFloorMeshesByVerticality[1] = NULL;
    this->TrackFloorMeshesByVerticality[2] = NULL;
    this->NeighborsByDirection[0] = NULL;
    this->NeighborsByDirection[1] = NULL;
    this->NeighborsByDirection[2] = NULL;
    this->NeighborsByDirection[3] = NULL;
    this->SwitchState = 0;
    this->ConfigurationIdx = -1;
    this->TrackMeshComp = NULL;
    this->TrackFloorMeshComp = NULL;
    this->ConnectorMeshCompsByDirection[0] = NULL;
    this->ConnectorMeshCompsByDirection[1] = NULL;
    this->ConnectorMeshCompsByDirection[2] = NULL;
    this->ConnectorMeshCompsByDirection[3] = NULL;
    this->PlacementCollision1 = CreateDefaultSubobject<UBoxComponent>(TEXT("PlacementCollision1"));
    this->PlacementCollision2 = CreateDefaultSubobject<UBoxComponent>(TEXT("PlacementCollision2"));
    this->SplineComp1 = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp1"));
    this->SplineComp2 = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp2"));
    this->SwitchCompBase = CreateDefaultSubobject<USceneComponent>(TEXT("SwitchCompBase"));
    this->SwitchComp = NULL;
}

