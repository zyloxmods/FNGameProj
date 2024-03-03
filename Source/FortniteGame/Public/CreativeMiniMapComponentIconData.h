#pragma once
#include "CoreMinimal.h"
#include "ECreativeMinimapComponentIconColorType.h"
#include "CreativeMiniMapComponentIconData.generated.h"

USTRUCT(BlueprintType)
struct FCreativeMiniMapComponentIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreativeMinimapComponentIconColorType IconColor;
    
    FORTNITEGAME_API FCreativeMiniMapComponentIconData();
};

