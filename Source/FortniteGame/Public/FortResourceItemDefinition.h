#pragma once
#include "CoreMinimal.h"
#include "EFortResourceType.h"
#include "FortWorldItemDefinition.h"
#include "FortResourceItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortResourceItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortResourceType ResourceType;
    
    UFortResourceItemDefinition();
};

