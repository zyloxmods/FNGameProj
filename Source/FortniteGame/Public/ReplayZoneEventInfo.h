#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseReplayEventInfo.h"
#include "ReplayZoneEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayZoneEventInfo : public FBaseReplayEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ZoneCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoneRadius;
    
    FORTNITEGAME_API FReplayZoneEventInfo();
};

