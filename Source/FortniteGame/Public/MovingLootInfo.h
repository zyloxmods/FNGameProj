#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovingLootInfo.generated.h"

USTRUCT(BlueprintType)
struct FMovingLootInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastLocationInOctree;
    
    FORTNITEGAME_API FMovingLootInfo();
};

