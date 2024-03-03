#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "Templates/SubclassOf.h"
#include "BuildingProp_AISpawner.generated.h"

class AAthenaCreativeRift;
class ABuildingRift;
class UFortCreativeCreatureManagerComponent;
class UFortMinigameProgressComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ABuildingProp_AISpawner : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAthenaCreativeRift> CreativeRiftClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeCreatureManagerComponent* CreatureManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMinigameProgressComponent* MinigameProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAthenaCreativeRift* CreativeRift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivationRangeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDistanceToAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnRangeOverride;
    
public:
    ABuildingProp_AISpawner();
    UFUNCTION(BlueprintCallable)
    void SpawnRift();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnLocation(USceneComponent* NewSpawnLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedRift(ABuildingRift* SpawnedRift);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MinigameEnded();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRift();
    
    UFUNCTION(BlueprintCallable)
    void AdjustCollision(bool bIgnore, UPrimitiveComponent* Collision);
    
};

