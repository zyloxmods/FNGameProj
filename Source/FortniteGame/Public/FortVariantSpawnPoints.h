#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortVariantSpawnPoints.generated.h"

USTRUCT(BlueprintType)
struct FFortVariantSpawnPoints : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BudgetPoints;
    
    FORTNITEGAME_API FFortVariantSpawnPoints();
};

