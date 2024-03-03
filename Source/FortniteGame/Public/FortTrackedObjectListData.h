#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortTrackedObjectListData.generated.h"

USTRUCT(BlueprintType)
struct FFortTrackedObjectListData : public FTableRowBase {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortTrackedObjectListData();
};

