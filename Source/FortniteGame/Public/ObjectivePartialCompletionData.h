#pragma once
#include "CoreMinimal.h"
#include "ObjectivePartialCompletionData.generated.h"

USTRUCT(BlueprintType)
struct FObjectivePartialCompletionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionCount;
    
    FORTNITEGAME_API FObjectivePartialCompletionData();
};

