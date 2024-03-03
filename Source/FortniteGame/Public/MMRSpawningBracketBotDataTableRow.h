#pragma once
#include "CoreMinimal.h"
#include "MMRPhaseSpawningDataTableInfo.h"
#include "MMRSpawningBracketBaseDataTableRow.h"
#include "MMRSpawningBracketBotDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FMMRSpawningBracketBotDataTableRow : public FMMRSpawningBracketBaseDataTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMMRPhaseSpawningDataTableInfo> PhaseSpawningItems;
    
    FORTNITEGAME_API FMMRSpawningBracketBotDataTableRow();
};

