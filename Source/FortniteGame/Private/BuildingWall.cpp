#include "BuildingWall.h"
#include "Net/UnrealNetwork.h"

void ABuildingWall::VerifyDoorOpenMatchesServer() {
}

void ABuildingWall::VerifyDoorCollisionMatchesServer() {
}

void ABuildingWall::OnRep_bDoorOpen() {
}

void ABuildingWall::OnRep_bDoorCollisionDisabled() {
}

void ABuildingWall::OnNearDoorTriggerUnTouched(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABuildingWall::OnNearDoorTriggerTouched(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ABuildingWall::IsDoorOpen() const {
    return false;
}

bool ABuildingWall::IsDoorComponent(const UStaticMeshComponent* MeshComponent) const {
    return false;
}

void ABuildingWall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingWall, DoorMesh);
    DOREPLIFETIME(ABuildingWall, DoubleDoorMesh);
    DOREPLIFETIME(ABuildingWall, DoorDesiredRotOffset);
    DOREPLIFETIME(ABuildingWall, DoorDesiredXLocation);
    DOREPLIFETIME(ABuildingWall, SlidingDoorDesiredXLocation);
    DOREPLIFETIME(ABuildingWall, DoorOpenStyle);
    DOREPLIFETIME(ABuildingWall, bDoorOpen);
    DOREPLIFETIME(ABuildingWall, bDoorCollisionDisabled);
}

ABuildingWall::ABuildingWall() {
    SlidingTranslation = 1;
    SlidingOpenTime = 1;
    DoorOpeningSound = NULL;
    DoorSlammedOpenSound = NULL;
    DoorClosingSound = NULL;
    DoorAnimatingMaterial = NULL;
    DoorMesh = NULL;
    DoubleDoorMesh = NULL;
    DoorComponent = NULL;
    SlidingDoorComponent = NULL;
    DoubleDoorComponent = NULL;
    DoorBoxComponent = NULL;
    DoorSmartLinkComp = NULL;
    DoorBlueprintMeshComp = NULL;
    SlidingDoorBlueprintMeshComp = NULL;
    DoubleDoorBlueprintMeshComp = NULL;
    DoorDesiredXLocation = 1;
    SlidingDoorDesiredXLocation = 1;
    AreaWidthOverride = 1;
    AreaShapeType = EBuildingWallArea::Regular;
    DoorOpenStyle = EDoorOpenStyle::Open;
    bSwingingDoor = false;
    bSlidingDoor = false;
    bAutomaticSlidingDoor = false;
    bDoubleDoor = false;
    bCreateDoorLink = true;
    bDoorOpen = false;
    bLocalDoorOpen = false;
    bDoorCollisionDisabled = false;
    bLocalDoorCollisionDisabled = false;
    bOverrideAreaWidth = false;
    bCreateClimbLink = true;
    bProhibitPassOverLowEndOfTriangleWall = false;
}

