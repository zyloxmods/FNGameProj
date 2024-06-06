#include "DeployableBasePlot.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

void ADeployableBasePlot::SetContextComponent(UPrimitiveComponent* ContextComponent) {
}

void ADeployableBasePlot::OnRep_OccupantNetID() {
}

void ADeployableBasePlot::OnRep_CurrentBuildingState() {
}

void ADeployableBasePlot::OnRep_BuildableSpaceExpansionVector() {
}

void ADeployableBasePlot::OnCurrentBuildingStateSet_Implementation(EDeployableBaseBuildingState InCurrentBuildingState) {
}

void ADeployableBasePlot::OnBuildingStateTransition_Implementation(EDeployableBaseBuildingState InPreviousState, EDeployableBaseBuildingState InCurrentState) {
}

bool ADeployableBasePlot::IsOccupied() const {
    return false;
}

bool ADeployableBasePlot::IsOccupant(const FUniqueNetIdRepl& UserId) const {
    return false;
}

bool ADeployableBasePlot::IsBuildingActorWithinBuildableSpace(const ABuildingActor* ActorToCheck, const FVector& GridLocation) const {
    return false;
}

void ADeployableBasePlot::HandleBuildingStateTransition_Implementation(EDeployableBaseBuildingState InPreviousState, EDeployableBaseBuildingState InCurrentState) {
}

AFortPlayerStart* ADeployableBasePlot::GetPlayerStart() {
    return NULL;
}

FUniqueNetIdRepl ADeployableBasePlot::GetOccupantNetID() const {
    return FUniqueNetIdRepl{};
}

int32 ADeployableBasePlot::GetNumOfItemsInPlot() const {
    return 0;
}

void ADeployableBasePlot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADeployableBasePlot, OccupantNetID);
    DOREPLIFETIME(ADeployableBasePlot, CurrentBuildingState);
    DOREPLIFETIME(ADeployableBasePlot, PlotInventory);
    DOREPLIFETIME(ADeployableBasePlot, BuildableSpaceExpansionVector);
    DOREPLIFETIME(ADeployableBasePlot, BuildableAreasStructuralSupportBoxesArray);
}

ADeployableBasePlot::ADeployableBasePlot() {
    OccupantDeployableBaseRecord = NULL;
    SavableSpaceComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SavableSpaceComponent"));
    EntirePlotSpaceComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EntirePlotSpaceComponent"));
    SpawnOffsetComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    DeployableBaseCore = NULL;
    bDirty = false;
    bDirtiedSinceLastWriteToBuffer = false;
    bCloudFileSavedSinceLastCloudItemUpdate = false;
    CurrentBuildingState = EDeployableBaseBuildingState::Empty;
    GoalBuildingState = EDeployableBaseBuildingState::Empty;
    PlotInventory = NULL;
    DeferredActorIdxToResumeAt = 0;
    NumActorsFromRecordDestroyed = 0;
    MaxActorsToCreatePerBuildingCall = 0;
    MaxActorsToDestroyPerDestroyCall = 0;
    DelayBetweenActorRecordBuilding = 1;
    DelayBetweenActorRecordDestroying = 1;
    PlayerStart = NULL;
    ConstructionTimeEffect = NULL;
}

