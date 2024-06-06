#pragma once
#include "CoreMinimal.h"
#include "EFortConditionalResourceItemTest.h"
#include "FortPersistentResourceItemDefinition.h"
#include "FortConditionalResourceItemDefinition.generated.h"

class UFortAccountItemDefinition;

UCLASS(Blueprintable)
class UFortConditionalResourceItemDefinition : public UFortPersistentResourceItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortConditionalResourceItemTest Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAccountItemDefinition> PassedConditionItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAccountItemDefinition> FailedConditionItem;
    
public:
    UFortConditionalResourceItemDefinition(const FObjectInitializer& ObjectInitializer);
};

