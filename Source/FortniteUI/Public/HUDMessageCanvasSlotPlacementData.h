#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Widgets/Layout/Anchors.h"
#include "HUDMessageCanvasSlotPlacementData.generated.h"

USTRUCT(BlueprintType)
struct FHUDMessageCanvasSlotPlacementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchors Anchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Alignment;
    
    FORTNITEUI_API FHUDMessageCanvasSlotPlacementData();
};

