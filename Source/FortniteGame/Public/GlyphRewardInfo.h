#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GlyphRewardInfo.generated.h"

class UFortChallengeBundleItemDefinition;
class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FGlyphRewardInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortChallengeBundleItemDefinition* BundleDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestDef;
    
    FORTNITEGAME_API FGlyphRewardInfo();
};

