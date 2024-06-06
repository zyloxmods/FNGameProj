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
    ToggleSwitchText = FText::FromString(TEXT("Toggle Track"));
    ToggleInteractTime = 1;
    TrackPieceMeshesByType[0] = NULL;
    TrackPieceMeshesByType[1] = NULL;
    TrackPieceMeshesByType[2] = NULL;
    TrackPieceMeshesByType[3] = NULL;
    TrackPieceMeshesByType[4] = NULL;
    bUseFloorMesh = true;
    TrackFloorMeshesByVerticality[0] = NULL;
    TrackFloorMeshesByVerticality[1] = NULL;
    TrackFloorMeshesByVerticality[2] = NULL;
    NeighborsByDirection[0] = NULL;
    NeighborsByDirection[1] = NULL;
    NeighborsByDirection[2] = NULL;
    NeighborsByDirection[3] = NULL;
    SwitchState = 0;
    ConfigurationIdx = 0;
    TrackMeshComp = NULL;
    TrackFloorMeshComp = NULL;
    ConnectorMeshCompsByDirection[0] = NULL;
    ConnectorMeshCompsByDirection[1] = NULL;
    ConnectorMeshCompsByDirection[2] = NULL;
    ConnectorMeshCompsByDirection[3] = NULL;
    PlacementCollision1 = CreateDefaultSubobject<UBoxComponent>(TEXT("PlacementCollision1"));
    PlacementCollision2 = CreateDefaultSubobject<UBoxComponent>(TEXT("PlacementCollision2"));
    SplineComp1 = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp1"));
    SplineComp2 = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp2"));
    SwitchCompBase = CreateDefaultSubobject<USceneComponent>(TEXT("SwitchCompBase"));
    SwitchComp = NULL;
}

