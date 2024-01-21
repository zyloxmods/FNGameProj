#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortShowdownScoringRuleDisplayInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFortShowdownScoringRuleDisplayInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    FORTNITEUI_API FFortShowdownScoringRuleDisplayInfo();
};

