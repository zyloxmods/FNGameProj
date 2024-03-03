#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortRewardInfo.h"
#include "FortCollectionBookSectionData.generated.h"

USTRUCT(BlueprintType)
struct FFortCollectionBookSectionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SlotRowNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRewardInfo Rewards;
    
    FORTNITEGAME_API FFortCollectionBookSectionData();
};

