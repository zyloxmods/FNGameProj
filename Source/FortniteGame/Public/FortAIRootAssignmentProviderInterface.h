#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortAIAssignmentIdentifier.h"
#include "FortAIRootAssignmentProviderInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortAIRootAssignmentProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IFortAIRootAssignmentProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FFortAIAssignmentIdentifier GetRootAssignmentIdentifier() const PURE_VIRTUAL(GetRootAssignmentIdentifier, return FFortAIAssignmentIdentifier{};);
    
};

