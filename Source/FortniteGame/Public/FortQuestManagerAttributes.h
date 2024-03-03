#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortQuestPoolStats.h"
#include "FortQuestManagerAttributes.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestManagerAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DailyLoginInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyQuestRerolls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortQuestPoolStats QuestPoolStats;
    
    FORTNITEGAME_API FFortQuestManagerAttributes();
};

