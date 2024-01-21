#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortShowdownScoringRuleInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortShowdownScoringRuleInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisplayInfoId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreRequirement;
    
    FORTNITEGAME_API FFortShowdownScoringRuleInfo();
};

