#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PegasusGameEventCollector.generated.h"

class AActor;
class AFortPlayerPawn;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UPegasusGameEventCollector : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryChangesTimeSpan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndSkydivePlayerCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponExecutedTimeSpan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingBeginPlayTimeSpan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpensiveTestInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SquadCohesionTestRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerResourceEventsTimeSpan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EliminationEventsTimeSpan;
    
public:
    UPegasusGameEventCollector();
private:
    UFUNCTION(BlueprintCallable)
    void HandleOwnerVehicleStateChange(AFortPlayerPawn* Sender, AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable)
    void HandleOwnerEndSkyDiving();
    
    UFUNCTION(BlueprintCallable)
    void HandleOwnerBeginSkyDiving();
    
    UFUNCTION(BlueprintCallable)
    void HandleOwnerAthenaPlaceChanged(AFortPlayerStateAthena* Sender, int32 NewPlace);
    
};

