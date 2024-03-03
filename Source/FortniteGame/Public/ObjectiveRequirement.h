#pragma once
#include "CoreMinimal.h"
#include "ObjectiveRequirement.generated.h"

USTRUCT(BlueprintType)
struct FObjectiveRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveBackendName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    FORTNITEGAME_API FObjectiveRequirement();
};

