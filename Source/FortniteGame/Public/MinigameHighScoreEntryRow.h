#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MinigameHighScoreEntryRow.generated.h"

USTRUCT(BlueprintType)
struct FMinigameHighScoreEntryRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    FORTNITEGAME_API FMinigameHighScoreEntryRow();
};

