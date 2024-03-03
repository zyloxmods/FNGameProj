#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HeroKeywordDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FHeroKeywordDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KeyWordGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KeywordDisplayName;
    
    FORTNITEGAME_API FHeroKeywordDisplayData();
};

