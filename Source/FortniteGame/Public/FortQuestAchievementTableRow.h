#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortQuestState.h"
#include "FortQuestAchievementTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestAchievementTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestState QuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XboxAchievementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4TrophyID;
    
    FORTNITEGAME_API FFortQuestAchievementTableRow();
};

