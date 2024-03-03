#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "NitrogenMapIcon.h"
#include "NitrogenMapPlacementIcon.generated.h"

USTRUCT(BlueprintType)
struct FNitrogenMapPlacementIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenMapIcon PlacementMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenMapIcon SquadmatePlacementMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumTeamScoreToShow;
    
    NITROGENRUNTIME_API FNitrogenMapPlacementIcon();
};

