#pragma once
#include "CoreMinimal.h"
#include "TrackCategory.h"
#include "TrackCategoryUI.generated.h"

USTRUCT(BlueprintType)
struct FTrackCategoryUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrackCategory TrackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastSelectedIndex;
    
    FORTNITEUI_API FTrackCategoryUI();
};

