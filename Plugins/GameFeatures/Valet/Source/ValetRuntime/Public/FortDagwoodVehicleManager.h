#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "FortDagwoodVehicleManager.generated.h"

class AActor;
class AFortAthenaVehicle;
class UFortVehicleItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortDagwoodVehicleManager : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasUpdatedPropReplacement;
    
public:
    UFortDagwoodVehicleManager();
    UFUNCTION(BlueprintCallable)
    void UpdatePropReplacement();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVehicleFuel(float NewFuel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetVehicleFuel(float NewFuel);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleSpawnsUpdated(UFortVehicleItemDefinition* VehicleItemDef, TArray<AActor*>& SpawnedVehicles, int32 NewVehicleCount);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleSpawned(AFortAthenaVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void CustomHandleActorStreamedInEditor(AActor* SourceActor);
    
};

