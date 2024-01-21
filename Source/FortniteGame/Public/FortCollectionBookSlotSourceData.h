#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortCollectionBookSlotSourceData.generated.h"

USTRUCT(BlueprintType)
struct FFortCollectionBookSlotSourceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FORTNITEGAME_API FFortCollectionBookSlotSourceData();
};

