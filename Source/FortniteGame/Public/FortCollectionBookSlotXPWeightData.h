#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortCollectionBookSlotXPWeightData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCollectionBookSlotXPWeightData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstantWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RarityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemLevelWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemRatingWeight;
    
    FFortCollectionBookSlotXPWeightData();
};

