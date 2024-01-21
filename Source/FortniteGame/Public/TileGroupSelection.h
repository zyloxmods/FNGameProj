#pragma once
#include "CoreMinimal.h"
#include "TileGroupInfo.h"
#include "TileGroupSelection.generated.h"

USTRUCT(BlueprintType)
struct FTileGroupSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTileGroupInfo> TileGroupOptions;
    
    FORTNITEGAME_API FTileGroupSelection();
};

