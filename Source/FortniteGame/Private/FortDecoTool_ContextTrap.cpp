#include "FortDecoTool_ContextTrap.h"
#include "Net/UnrealNetwork.h"

void AFortDecoTool_ContextTrap::SetContextTrapItemDefinition(const UFortContextTrapItemDefinition* InContextTrapItemDefinition) {
}

void AFortDecoTool_ContextTrap::ServerSpawnDeco_Implementation(FVector Location, FRotator Rotation, ABuildingSMActor* AttachedActor, EBuildingAttachmentType InBuildingAttachmentType) {
}

void AFortDecoTool_ContextTrap::ServerCreateBuildingAndSpawnDeco_Implementation(FVector_NetQuantize10 BuildingLocation, FRotator BuildingRotation, FVector_NetQuantize10 Location, FRotator Rotation, EBuildingAttachmentType InBuildingAttachmentType) {
}

void AFortDecoTool_ContextTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortDecoTool_ContextTrap, ContextTrapItemDefinition);
}

AFortDecoTool_ContextTrap::AFortDecoTool_ContextTrap() {
    ContextTrapItemDefinition = NULL;
}

