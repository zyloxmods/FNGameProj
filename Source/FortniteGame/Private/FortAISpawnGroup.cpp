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
    EnemyUtilities[0] = 1;
    EnemyUtilities[1] = 1;
    EnemyUtilities[2] = 1;
    EnemyUtilities[3] = 1;
    EnemyUtilities[4] = 1;
    EnemyUtilities[5] = 1;
    EnemyUtilities[6] = 1;
    EnemyUtilities[7] = 1;
    EnemyUtilities[8] = 1;
    EnemyUtilities[9] = 1;
    EnemyUtilities[10] = 1;
    EnemyUtilities[11] = 1;
    EnemyUtilities[12] = 1;
    EnemyUtilities[13] = 1;
    EnemyUtilities[14] = 1;
    EnemyUtilities[15] = 1;
    bIsPrototype = false;
    bIsValidForEnemySpawners = false;
    bIsLargeSpawnGroup = false;
    MaxDiscountRatio = 1;
    bUseWeightSystem = false;
}

