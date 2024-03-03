#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortMultiSizeBrush.h"
#include "FortMultiSizeBrushAsset.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMultiSizeBrushAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush Brush;
    
    UFortMultiSizeBrushAsset();
};

