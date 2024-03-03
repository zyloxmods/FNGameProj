#pragma once
#include "CoreMinimal.h"
#include "TieredCollectionProgressionDataBase.h"
#include "TieredNamedCollectionProgressionData.generated.h"

USTRUCT(BlueprintType)
struct FTieredNamedCollectionProgressionData : public FTieredCollectionProgressionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CollectionNames;
    
    FORTNITEGAME_API FTieredNamedCollectionProgressionData();
};

