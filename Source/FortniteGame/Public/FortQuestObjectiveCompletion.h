#pragma once
#include "CoreMinimal.h"
#include "FortQuestObjectiveCompletion.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestObjectiveCompletion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimestampOffset;
    
    FORTNITEGAME_API FFortQuestObjectiveCompletion();
};

