#include "BattleLabDeviceGameplayActor_VendingMachine.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

bool ABattleLabDeviceGameplayActor_VendingMachine::ServerOnAttemptInteract(const FInteractionType& InteractType) {
    return false;
}

void ABattleLabDeviceGameplayActor_VendingMachine::PreviewImageLoadedFromItemDef(TSoftObjectPtr<UTexture2D> PreviewImage) {
}


void ABattleLabDeviceGameplayActor_VendingMachine::OnRep_DroppedIntoFunnelPickup() {
}

void ABattleLabDeviceGameplayActor_VendingMachine::OnFunnelCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ABattleLabDeviceGameplayActor_VendingMachine::AddStoredItemDefinitionMulti_Implementation(const UFortItemDefinition* InItemDefinition) {
}

void ABattleLabDeviceGameplayActor_VendingMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattleLabDeviceGameplayActor_VendingMachine, DroppedIntoFunnelPickup);
}

ABattleLabDeviceGameplayActor_VendingMachine::ABattleLabDeviceGameplayActor_VendingMachine() {
    VendingMachineMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Vending Machine Mesh"));
    FunnelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Funnel Mesh"));
    FunnelCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Funnel Box Collision"));
    SpawnLootTransformArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Loot Spawn Arrow Location"));
    LootTossSpeed = 1;
    DroppedIntoFunnelPickup = NULL;
}

