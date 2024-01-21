#pragma once
#include "CoreMinimal.h"
#include "FortQuestEarnedBadgeData.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestEarnedBadgeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FORTNITEGAME_API FFortQuestEarnedBadgeData();
};

