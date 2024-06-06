#include "FortDecoTool.h"
#include "Net/UnrealNetwork.h"

bool AFortDecoTool::TryToPlace() {
    return false;
}

void AFortDecoTool::SetHelper(AFortDecoHelper* InHelper) {
}

void AFortDecoTool::SetDecoObjectPreview(const UFortItemDefinition* InItemDefinition, bool bUpdatePreviewPosition) {
}

void AFortDecoTool::ServerSpawnDeco_Implementation(FVector Location, FRotator Rotation, ABuildingSMActor* AttachedActor, EBuildingAttachmentType InBuildingAttachmentType) {
}
bool AFortDecoTool::ServerSpawnDeco_Validate(FVector Location, FRotator Rotation, ABuildingSMActor* AttachedActor, EBuildingAttachmentType InBuildingAttachmentType) {
    return true;
}

void AFortDecoTool::ServerCreateBuildingAndSpawnDeco_Implementation(FVector_NetQuantize10 BuildingLocation, FRotator BuildingRotation, FVector_NetQuantize10 Location, FRotator Rotation, EBuildingAttachmentType InBuildingAttachmentType) {
}
bool AFortDecoTool::ServerCreateBuildingAndSpawnDeco_Validate(FVector_NetQuantize10 BuildingLocation, FRotator BuildingRotation, FVector_NetQuantize10 Location, FRotator Rotation, EBuildingAttachmentType InBuildingAttachmentType) {
    return true;
}

void AFortDecoTool::OnUnEquip() {
}

void AFortDecoTool::OnRep_ItemDefinition() {
}

void AFortDecoTool::OnRep_CarriedActor(AActor* OldCarriedActor) {
}

void AFortDecoTool::OnCarriedActorDestroyed(AActor* DestroyedActor) {
}

void AFortDecoTool::ClientDestroyDecoPreview_Implementation() {
}

void AFortDecoTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortDecoTool, ItemDefinition);
    DOREPLIFETIME(AFortDecoTool, CarriedActor);
}

AFortDecoTool::AFortDecoTool() {
    bButtonDown = false;
    ItemDefinition = NULL;
    DecoHelper = NULL;
    CarriedActor = NULL;
    bPlaceCarriedActor = false;
    bPreventExecutionOnOwningPlayerFalling = false;
    bIsEquipped = false;
}

