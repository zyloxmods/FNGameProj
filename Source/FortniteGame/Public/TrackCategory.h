#pragma once
#include "CoreMinimal.h"
#include "TrackCategory.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FTrackCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> CategoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryStartingLevel;
    
    FORTNITEGAME_API FTrackCategory();
};

