#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortSquadStartSearchParamData.h"
#include "ChromeRoute.generated.h"

USTRUCT(BlueprintType)
struct FChromeRoute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSquadStartSearchParamData SquadStartSearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> FinishPOITags;
    
    FORTNITEGAME_API FChromeRoute();
};

