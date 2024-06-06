#include "BuildingPhoenixItemCollectorActor.h"
#include "Net/UnrealNetwork.h"

EFortRarity ABuildingPhoenixItemCollectorActor::GetOutputRewardRarity() const {
    return EFortRarity::Common;
}

int32 ABuildingPhoenixItemCollectorActor::GetOutputRewardLevel() const {
    return 0;
}

bool ABuildingPhoenixItemCollectorActor::GetActiveOutputRecipe(FRecipe& OutRecipe) const {
    return false;
}

void ABuildingPhoenixItemCollectorActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingPhoenixItemCollectorActor, OutputItemRecipes);
}

ABuildingPhoenixItemCollectorActor::ABuildingPhoenixItemCollectorActor() {
    VendingTier = 0;
}

