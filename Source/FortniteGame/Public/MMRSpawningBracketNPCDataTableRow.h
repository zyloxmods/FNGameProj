#pragma once
#include "CoreMinimal.h"
#include "MMRSpawningBracketBaseDataTableRow.h"
#include "MMRSpawningBracketNPCDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FMMRSpawningBracketNPCDataTableRow : public FMMRSpawningBracketBaseDataTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Skill;
    
    FORTNITEGAME_API FMMRSpawningBracketNPCDataTableRow();
};

