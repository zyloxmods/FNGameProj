#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateColor.h"
#include "FortQuestMapCosmetic.h"
#include "FortQuestMapPageCosmetics.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestMapPageCosmetics : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNodeArrowColorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor NodeArrowColorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortQuestMapCosmetic> CosmeticList;
    
    FORTNITEGAME_API FFortQuestMapPageCosmetics();
};

