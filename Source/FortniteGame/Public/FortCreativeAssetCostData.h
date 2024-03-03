#pragma once
#include "CoreMinimal.h"
#include "CreativeActorMetaData.h"
#include "FortCreativeAssetCostData.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeAssetCostData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCreativeActorMetaData> MetaDataMap;
    
    FORTNITEGAME_API FFortCreativeAssetCostData();
};

