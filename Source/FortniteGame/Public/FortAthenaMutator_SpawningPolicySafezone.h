#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_EQSProviderInterface.h"
#include "FortAthenaMutator_SpawningPolicyBase.h"
#include "FortAthenaMutator_SpawningPolicySafezone.generated.h"

class UEnvQuery;
class UFortAthenaMutator_SpawningPolicyData;

UCLASS(Blueprintable)
class AFortAthenaMutator_SpawningPolicySafezone : public AFortAthenaMutator_SpawningPolicyBase, public IFortAthenaMutator_EQSProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaMutator_SpawningPolicyData*> ItemSpawningMutatorPerSafeZonePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseQueryingAttemptIntervalTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnvQuery> BasePlacementQuery;
    
public:
    AFortAthenaMutator_SpawningPolicySafezone();
    
    // Fix for true pure virtual functions not being implemented
};

