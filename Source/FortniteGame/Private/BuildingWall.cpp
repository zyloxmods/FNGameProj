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
    DOREPLIFETIME(ABuildingWall, DoorDesiredRotOffset);
    DOREPLIFETIME(ABuildingWall, DoorDesiredXLocation);
    DOREPLIFETIME(ABuildingWall, SlidingDoorDesiredXLocation);
    DOREPLIFETIME(ABuildingWall, bDoorOpen);
    DOREPLIFETIME(ABuildingWall, bDoorCollisionDisabled);
}

ABuildingWall::ABuildingWall() {
    this->bSlidingDoor = false;
    this->bAutomaticSlidingDoor = false;
    this->SlidingTranslation = 0.00f;
    this->DoorOpeningSound = NULL;
    this->DoorClosingSound = NULL;
    this->DoorAnimatingMaterial = NULL;
    this->DoorMesh = NULL;
    this->DoorComponent = NULL;
    this->SlidingDoorComponent = NULL;
    this->DoorBoxComponent = NULL;
    this->DoorSmartLinkComp = NULL;
    this->DoorBlueprintMeshComp = NULL;
    this->SlidingDoorBlueprintMeshComp = NULL;
    this->DoorDesiredXLocation = 0.00f;
    this->SlidingDoorDesiredXLocation = 0.00f;
    this->AreaWidthOverride = 0.00f;
    this->AreaShapeType = EBuildingWallArea::Regular;
    this->bDoorOpen = false;
    this->bLocalDoorOpen = false;
    this->DoorDisabledCollisionSetting = ECollisionEnabled::NoCollision;
    this->bDoorCollisionDisabled = false;
    this->bLocalDoorCollisionDisabled = false;
    this->bOverrideAreaWidth = false;
    this->bCreateClimbLink = true;
}

