#pragma once
#include "CoreMinimal.h"
#include "AISubsystem.h"
#include "UObject/NoExportTypes.h"
#include "OnPawnSpawnedDynamicEventDelegate.h"
#include "AthenaAISpawner.generated.h"

class UFortAthenaAISpawnerDataComponentList;

UCLASS(Blueprintable)
class UAthenaAISpawner : public UAISubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnSpawnedDynamicEvent OnPawnSpawnedEvent;
    
public:
    UAthenaAISpawner();
    UFUNCTION(BlueprintCallable)
    int32 RequestSpawn(UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    bool CancelRequest(const int32 RequestID);
    
};

