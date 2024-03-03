#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "FortAIAssignmentIdentifier.h"
#include "FortQueryTest_IsGoalForAssignment.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_IsGoalForAssignment : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetrieveRootAssignmentFromOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIAssignmentIdentifier RootAssignmentID;
    
public:
    UFortQueryTest_IsGoalForAssignment();
};

