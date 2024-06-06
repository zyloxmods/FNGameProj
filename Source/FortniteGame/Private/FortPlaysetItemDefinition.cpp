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

UFortPlaysetItemDefinition::UFortPlaysetItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    SizeX = 0;
    SizeY = 0;
    SizeZ = 0;
    ZSnapTolerance = 1;
    OffsetType = EPlaysetOffsetType::CustomOffsetFromCorner;
    bUseLocationOffset = false;
    bAdjustForWorldCollision = false;
    bUsePlaysetProps = false;
    LevelSaveRecord = NULL;
    PlaysetPropLevelSaveRecordCollection = NULL;
}

