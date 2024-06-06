#include "BattleLabDeviceGameplayActor.h"
#include "Net/UnrealNetwork.h"

void ABattleLabDeviceGameplayActor::OnRep_BattleLabDeviceItemData() {
}

void ABattleLabDeviceGameplayActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattleLabDeviceGameplayActor, BattleLabDeviceItemData);
}

ABattleLabDeviceGameplayActor::ABattleLabDeviceGameplayActor() {
    BattleLabDeviceItemData = NULL;
}

