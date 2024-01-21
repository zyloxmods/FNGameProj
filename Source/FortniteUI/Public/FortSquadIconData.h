#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortMultiSizeBrush.h"
#include "FortSquadIconData.generated.h"

USTRUCT(BlueprintType)
struct FFortSquadIconData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush Brush;
    
    FORTNITEUI_API FFortSquadIconData();
};

