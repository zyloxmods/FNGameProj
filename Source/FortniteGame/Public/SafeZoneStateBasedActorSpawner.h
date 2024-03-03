#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaMutator_EQSActorProviderInterface.h"
#include "FortAthenaMutator_EQSProviderInterface.h"
#include "SafeZoneStateBasedActorSpawner.generated.h"

class AActor;
class AFortAthenaMutator_SafeZoneStateBasedActorSpawner;

UCLASS(Blueprintable)
class USafeZoneStateBasedActorSpawner : public UObject, public IFortAthenaMutator_EQSProviderInterface, public IFortAthenaMutator_EQSActorProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_SafeZoneStateBasedActorSpawner* OwningActorSpawnerMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
public:
    USafeZoneStateBasedActorSpawner();
    
    // Fix for true pure virtual functions not being implemented
};

