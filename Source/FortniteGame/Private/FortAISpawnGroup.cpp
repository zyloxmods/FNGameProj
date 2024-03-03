#include "FortAISpawnGroup.h"
#include "Templates/SubclassOf.h"

bool UFortAISpawnGroup::IsValidForEnemySpawners() const {
    return false;
}

bool UFortAISpawnGroup::IsPrototype() const {
    return false;
}

bool UFortAISpawnGroup::IsLargeSpawnGroup() const {
    return false;
}

int32 UFortAISpawnGroup::GetNumberOfEnemies() const {
    return 0;
}

TSubclassOf<UFortAIPawnVariant> UFortAISpawnGroup::GetEnemy(int32 EnemyIndex) const {
    return NULL;
}

UFortAISpawnGroup::UFortAISpawnGroup() {
    this->EnemyUtilities[0] = 1;
    this->EnemyUtilities[1] = 1;
    this->EnemyUtilities[2] = 1;
    this->EnemyUtilities[3] = 1;
    this->EnemyUtilities[4] = 1;
    this->EnemyUtilities[5] = 1;
    this->EnemyUtilities[6] = 1;
    this->EnemyUtilities[7] = 1;
    this->EnemyUtilities[8] = 1;
    this->EnemyUtilities[9] = 1;
    this->EnemyUtilities[10] = 1;
    this->EnemyUtilities[11] = 1;
    this->EnemyUtilities[12] = 1;
    this->EnemyUtilities[13] = 1;
    this->EnemyUtilities[14] = 1;
    this->EnemyUtilities[15] = 1;
    this->bIsPrototype = false;
    this->bIsValidForEnemySpawners = false;
    this->bIsLargeSpawnGroup = false;
    this->MaxDiscountRatio = 1;
    this->bUseWeightSystem = false;
}

