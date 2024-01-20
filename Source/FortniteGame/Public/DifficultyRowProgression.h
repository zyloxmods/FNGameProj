#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "DifficultyRowProgression.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyRowProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DifficultyRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AdditiveDifficultyMod;
    
    FORTNITEGAME_API FDifficultyRowProgression();
};

