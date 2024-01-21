#pragma once
#include "CoreMinimal.h"
#include "ECollectionSelectionMethod.h"
#include "TieredCollectionProgressionDataBase.generated.h"

USTRUCT(BlueprintType)
struct FTieredCollectionProgressionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollectionSelectionMethod SelectionMethod;
    
    FORTNITEGAME_API FTieredCollectionProgressionDataBase();
};

