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
    this->EnemyUtilities[0] = 0.00f;
    this->EnemyUtilities[1] = 0.00f;
    this->EnemyUtilities[2] = 0.00f;
    this->EnemyUtilities[3] = 0.00f;
    this->EnemyUtilities[4] = 0.00f;
    this->EnemyUtilities[5] = 0.00f;
    this->EnemyUtilities[6] = 0.00f;
    this->EnemyUtilities[7] = 0.00f;
    this->EnemyUtilities[8] = 0.00f;
    this->EnemyUtilities[9] = 0.00f;
    this->EnemyUtilities[10] = 0.00f;
    this->EnemyUtilities[11] = 0.00f;
    this->EnemyUtilities[12] = 0.00f;
    this->EnemyUtilities[13] = 0.00f;
    this->EnemyUtilities[14] = 0.00f;
    this->EnemyUtilities[15] = 0.00f;
    this->bIsPrototype = false;
    this->bIsValidForEnemySpawners = false;
    this->bIsLargeSpawnGroup = false;
    this->MaxDiscountRatio = 0.00f;
    this->bUseWeightSystem = false;
}

