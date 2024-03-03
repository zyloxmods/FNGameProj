#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "TrackingOffsetModifiers.h"
#include "TrackingOffsetModifierInfo.generated.h"

USTRUCT(BlueprintType)
struct FTrackingOffsetModifierInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrackingOffsetModifiers Modifiers;
    
public:
    FORTNITEGAME_API FTrackingOffsetModifierInfo();
};

