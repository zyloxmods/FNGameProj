#pragma once
#include "CoreMinimal.h"
#include "ObjectivePartialCompletionData.h"
#include "ChallengePartialCompletionData.generated.h"

USTRUCT(BlueprintType)
struct FChallengePartialCompletionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectivePartialCompletionData> ObjectivData;
    
    FORTNITEGAME_API FChallengePartialCompletionData();
};

