#pragma once
#include "CoreMinimal.h"
#include "ESquadSlotSortType.h"
#include "SquadSlotSortTypes.generated.h"

USTRUCT(BlueprintType)
struct FSquadSlotSortTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESquadSlotSortType> SortTypes;
    
    FORTNITEUI_API FSquadSlotSortTypes();
};

