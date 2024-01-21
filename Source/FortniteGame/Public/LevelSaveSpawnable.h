#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LevelSaveSpawnable.generated.h"

class AFortVolume;

UINTERFACE(Blueprintable)
class ULevelSaveSpawnable : public UInterface {
    GENERATED_BODY()
};

class ILevelSaveSpawnable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreSaveBaseActorRecord();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreFinishSpawning(AFortVolume* VolumeSpawnedWithin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostLevelSaveSpawnCleanup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostFinishSpawning();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeSavedToCreativeVolume() const;
    
};

