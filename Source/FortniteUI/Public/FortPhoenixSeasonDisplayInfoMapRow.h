#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortPhoenixSeasonDisplayInfoMapRow.generated.h"

class UFortPhoenixSeasonDisplayInfo;

USTRUCT(BlueprintType)
struct FFortPhoenixSeasonDisplayInfoMapRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhoenixSeasonDisplayInfo* DisplayInfo;
    
    FORTNITEUI_API FFortPhoenixSeasonDisplayInfoMapRow();
};

