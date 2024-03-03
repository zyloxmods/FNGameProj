#pragma once
#include "CoreMinimal.h"
#include "AthenaMidSeasonUpdateQuestReq.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FAthenaMidSeasonUpdateQuestReq {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompletionRequired;
    
    FORTNITEGAME_API FAthenaMidSeasonUpdateQuestReq();
};

