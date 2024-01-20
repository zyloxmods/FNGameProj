#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortEditorTheaterMapRegionColor.generated.h"

class UFortRegionInfo;

USTRUCT(BlueprintType)
struct FFortEditorTheaterMapRegionColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortRegionInfo* Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RegionColor;
    
    FORTNITEGAME_API FFortEditorTheaterMapRegionColor();
};

