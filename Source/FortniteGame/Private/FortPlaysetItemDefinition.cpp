#include "FortPlaysetItemDefinition.h"

ULevelStreamingDynamic* UFortPlaysetItemDefinition::SpawnPlaysetFromStruct(AActor* WorldContextObject, const FFortPlaysetStreamingData& LevelData) {
    return NULL;
}

ULevelStreamingDynamic* UFortPlaysetItemDefinition::SpawnPlayset(AActor* WorldContextObject, UFortPlaysetItemDefinition* Playset, FVector Location, FRotator Rotation, FFortPlaysetStreamingData& OutLevelData) {
    return NULL;
}

void UFortPlaysetItemDefinition::SpawnActorsInPlayset(AActor* WorldContextObject, UFortPlaysetItemDefinition* Playset) {
}

FName UFortPlaysetItemDefinition::GetPlaysetName() const {
    return NAME_None;
}

FVector UFortPlaysetItemDefinition::AdjustToFinalLocation(UObject* WorldContextObject, UFortPlaysetItemDefinition* Playset, FVector BaseLocation, FRotator Rotation) {
    return FVector{};
}

UFortPlaysetItemDefinition::UFortPlaysetItemDefinition() {
    this->SizeX = 1;
    this->SizeY = 1;
    this->SizeZ = 6;
    this->ZSnapTolerance = 5.00f;
    this->OffsetType = EPlaysetOffsetType::CustomOffsetFromCorner;
    this->bAdjustForWorldCollision = false;
    this->LevelSaveRecord = NULL;
    this->bHasBeenCooked = false;
    this->TotalCreativeActorSize = 0;
    this->TotalCreativeActorInstanceSize = 0;
}

