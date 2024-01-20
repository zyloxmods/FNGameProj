#pragma once
#include "CoreMinimal.h"
#include "WorldTileSubArray.generated.h"

class AWorldTileFoundation;

USTRUCT(BlueprintType)
struct FWorldTileSubArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWorldTileFoundation*> X;
    
    FORTNITEGAME_API FWorldTileSubArray();
};

