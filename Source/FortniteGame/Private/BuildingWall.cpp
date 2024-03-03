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
    this->SlidingTranslation = 1;
    this->SlidingOpenTime = 1;
    this->DoorOpeningSound = NULL;
    this->DoorSlammedOpenSound = NULL;
    this->DoorClosingSound = NULL;
    this->DoorAnimatingMaterial = NULL;
    this->DoorMesh = NULL;
    this->DoubleDoorMesh = NULL;
    this->DoorComponent = NULL;
    this->SlidingDoorComponent = NULL;
    this->DoubleDoorComponent = NULL;
    this->DoorBoxComponent = NULL;
    this->DoorSmartLinkComp = NULL;
    this->DoorBlueprintMeshComp = NULL;
    this->SlidingDoorBlueprintMeshComp = NULL;
    this->DoubleDoorBlueprintMeshComp = NULL;
    this->DoorDesiredXLocation = 1;
    this->SlidingDoorDesiredXLocation = 1;
    this->AreaWidthOverride = 1;
    this->AreaShapeType = EBuildingWallArea::Regular;
    this->DoorOpenStyle = EDoorOpenStyle::Open;
    this->bSwingingDoor = false;
    this->bSlidingDoor = false;
    this->bAutomaticSlidingDoor = false;
    this->bDoubleDoor = false;
    this->bCreateDoorLink = true;
    this->bDoorOpen = false;
    this->bLocalDoorOpen = false;
    this->bDoorCollisionDisabled = false;
    this->bLocalDoorCollisionDisabled = false;
    this->bOverrideAreaWidth = false;
    this->bCreateClimbLink = true;
    this->bProhibitPassOverLowEndOfTriangleWall = false;
}

