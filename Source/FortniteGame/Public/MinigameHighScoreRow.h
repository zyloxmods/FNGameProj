#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MinigameHighScoreRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FMinigameHighScoreRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HighScoresTable;
    
    FMinigameHighScoreRow();
};

