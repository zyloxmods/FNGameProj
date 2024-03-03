#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortQuestState.h"
#include "FortItemToQuestData.generated.h"

USTRUCT(BlueprintType)
struct FFortItemToQuestData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemTemplateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestState QuestGrantState;
    
    FORTNITEGAME_API FFortItemToQuestData();
};

