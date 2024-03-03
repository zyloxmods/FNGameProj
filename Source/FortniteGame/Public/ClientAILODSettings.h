#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ClientAILODSettings.generated.h"

USTRUCT(BlueprintType)
struct FClientAILODSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ScoreMultiplier;
    
public:
    FORTNITEGAME_API FClientAILODSettings();
};

