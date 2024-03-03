#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayMutatorObserverInterface.h"
#include "FortAthenaSpawningPolicyManager.generated.h"

class AFortAthenaMutator_SpawningPolicyBase;
class AFortGameModeAthena;
class AFortGameStateAthena;

UCLASS(Blueprintable)
class AFortAthenaSpawningPolicyManager : public AActor, public IGameplayMutatorObserverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaMutator_SpawningPolicyBase*> SpawningPolicyMutatorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* GameModeAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* GameStateAthena;
    
public:
    AFortAthenaSpawningPolicyManager();
    
    // Fix for true pure virtual functions not being implemented
};

