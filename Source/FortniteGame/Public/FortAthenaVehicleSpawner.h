#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VehicleWeightedDef.h"
#include "FortAthenaVehicleSpawner.generated.h"

class UFortVehicleItemDefinition;
class USceneComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaVehicleSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DummyRoot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortVehicleItemDefinition> FortVehicleItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleWeightedDef> FortVehicleItemDefVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSpawnAlways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleItemDefinition* CachedFortVehicleItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsVehicleItemDefCached;
    
public:
    AFortAthenaVehicleSpawner();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetVehicleClass() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceSpawnAlways() const;
    
};

