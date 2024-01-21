#pragma once
#include "CoreMinimal.h"
#include "FortQuestMapDataEntry.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FFortQuestMapDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CosmeticData;
    
    FORTNITEGAME_API FFortQuestMapDataEntry();
};

