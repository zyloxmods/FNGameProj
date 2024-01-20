#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TieredWaveSetCollectionData.h"
#include "TieredWaveSetCollection.generated.h"

USTRUCT(BlueprintType)
struct FTieredWaveSetCollection : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTieredWaveSetCollectionData> CollectionData;
    
    FORTNITEGAME_API FTieredWaveSetCollection();
};

