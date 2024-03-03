#pragma once
#include "CoreMinimal.h"
#include "BuildingRift.h"
#include "FortEncounterSettings.h"
#include "AthenaCreativeRift.generated.h"

class AActor;
class ABuildingProp_AISpawner;
class AFortPlayerPawn;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class AAthenaCreativeRift : public ABuildingRift {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USphereComponent* DespawnSphereComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingProp_AISpawner* ParentTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterSettings OverrideEncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasLoadedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> DespawnPlayerOverlaps;
    
public:
    AAthenaCreativeRift();
    UFUNCTION(BlueprintCallable)
    void NotifyActorDespawnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintShowRift();
    
};

