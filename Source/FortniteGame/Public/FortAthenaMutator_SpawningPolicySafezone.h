#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_SpawningPolicyEQS.h"
#include "FortAthenaMutator_SpawningPolicySafezone.generated.h"

class UFortAthenaMutator_SpawningPolicyData;

UCLASS(Blueprintable)
class AFortAthenaMutator_SpawningPolicySafezone : public AFortAthenaMutator_SpawningPolicyEQS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaMutator_SpawningPolicyData*> ItemSpawningMutatorPerSafeZonePhase;
    
public:
    AFortAthenaMutator_SpawningPolicySafezone();
};

