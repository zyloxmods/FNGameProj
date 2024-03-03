#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortSurvivorNameData.generated.h"

USTRUCT(BlueprintType)
struct FFortSurvivorNameData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FORTNITEGAME_API FFortSurvivorNameData();
};

