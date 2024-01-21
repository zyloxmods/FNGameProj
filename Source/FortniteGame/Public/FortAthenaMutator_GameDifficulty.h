#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_GameDifficulty.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_GameDifficulty : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GameDifficultyOverride;
    
public:
    AFortAthenaMutator_GameDifficulty();
};

