#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "AthenaGameMessageData.h"
#include "EHUDMessageMessageTargets.h"
#include "EHUDMessagePlacement.h"
#include "HUDMessageData.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FHUDMessageData : public FAthenaGameMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDMessagePlacement Placement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDMessageMessageTargets MessageTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextTransformPolicy TextTransformPolicy;
    
    FORTNITEGAME_API FHUDMessageData();
};

