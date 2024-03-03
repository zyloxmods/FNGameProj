#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortQuestTagToCategoryDataRow.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestTagToCategoryDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AllChallengesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FORTNITEGAME_API FFortQuestTagToCategoryDataRow();
};

