#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortSurvivorNameData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortSurvivorNameData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FFortSurvivorNameData();
};

