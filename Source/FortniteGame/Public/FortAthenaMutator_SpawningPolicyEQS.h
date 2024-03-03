#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "FortAthenaMutator_EQSProviderInterface.h"
#include "FortAthenaMutator_SpawningPolicyBase.h"
#include "FortAthenaMutator_SpawningPolicyEQS.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class AFortAthenaMutator_SpawningPolicyEQS : public AFortAthenaMutator_SpawningPolicyBase, public IFortAthenaMutator_EQSProviderInterface, public INavAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseQueryingAttemptIntervalTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnvQuery> BasePlacementQuery;
    
public:
    AFortAthenaMutator_SpawningPolicyEQS();
    
    // Fix for true pure virtual functions not being implemented
};

