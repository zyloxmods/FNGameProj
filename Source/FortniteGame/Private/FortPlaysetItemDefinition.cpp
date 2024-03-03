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
    this->SizeX = 0;
    this->SizeY = 0;
    this->SizeZ = 0;
    this->ZSnapTolerance = 1;
    this->OffsetType = EPlaysetOffsetType::CustomOffsetFromCorner;
    this->bUseLocationOffset = false;
    this->bAdjustForWorldCollision = false;
    this->bUsePlaysetProps = false;
    this->LevelSaveRecord = NULL;
    this->PlaysetPropLevelSaveRecordCollection = NULL;
}

