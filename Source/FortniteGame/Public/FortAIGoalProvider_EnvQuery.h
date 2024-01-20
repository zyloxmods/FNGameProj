#pragma once
#include "CoreMinimal.h"
#include "FortAIAssignmentIdentifier.h"
#include "FortAIGoalProvider.h"
#include "FortAIRootAssignmentProviderInterface.h"
#include "FortAIGoalProvider_EnvQuery.generated.h"

class AFortAIPawn;
class UEnvQuery;

UCLASS(Blueprintable)
class UFortAIGoalProvider_EnvQuery : public UFortAIGoalProvider, public IFortAIRootAssignmentProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* GoalQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutomaticUpdatePeriodInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIAssignmentIdentifier SpecificAssignmentContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAIPawn> AIPawnContext;
    
public:
    UFortAIGoalProvider_EnvQuery();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FFortAIAssignmentIdentifier GetRootAssignmentIdentifier() const override PURE_VIRTUAL(GetRootAssignmentIdentifier, return FFortAIAssignmentIdentifier{};);
    
};

