#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MinigameScoreboardValue.generated.h"

class UFortMinigameStatFilter;

USTRUCT(BlueprintType)
struct FMinigameScoreboardValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> StatFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighlight;
    
    FORTNITEGAME_API FMinigameScoreboardValue();
};

