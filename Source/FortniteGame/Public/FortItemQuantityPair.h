#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortItemQuantityPair.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortItemQuantityPair {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ItemPrimaryAssetId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FFortItemQuantityPair();
};

