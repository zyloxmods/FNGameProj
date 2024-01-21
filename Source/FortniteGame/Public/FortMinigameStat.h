#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortMinigameStat.generated.h"

class UFortMinigameStatFilter;

USTRUCT(BlueprintType)
struct FFortMinigameStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FORTNITEGAME_API FFortMinigameStat();
};

