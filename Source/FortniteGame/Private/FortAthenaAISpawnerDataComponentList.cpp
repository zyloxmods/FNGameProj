#include "FortAthenaAISpawnerDataComponentList.h"
#include "Templates/SubclassOf.h"

UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerDataComponentList::OverrideComponentClass(const TSubclassOf<UFortAthenaAISpawnerDataComponent> NewComponentSubClass) {
    return NULL;
}

UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerDataComponentList::OverrideComponent(const UFortAthenaAISpawnerDataComponent* NewComponent) {
    return NULL;
}

UFortAthenaAISpawnerDataComponent* UFortAthenaAISpawnerDataComponentList::GetOrCreateComponentClassForModification(UObject* ComponentOuter, const TSubclassOf<UFortAthenaAISpawnerDataComponent> ClassToClone) const {
    return NULL;
}

TArray<UFortAthenaAISpawnerDataComponent*> UFortAthenaAISpawnerDataComponentList::GetList() {
    return TArray<UFortAthenaAISpawnerDataComponent*>();
}

UFortAthenaAISpawnerDataComponentList::UFortAthenaAISpawnerDataComponentList() {
}

