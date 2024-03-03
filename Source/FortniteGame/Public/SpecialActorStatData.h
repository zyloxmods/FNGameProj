#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpecialActorSingleStatData.h"
#include "SpecialActorStatData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialActorStatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialActorSingleStatData> Stats;
    
    FORTNITEGAME_API FSpecialActorStatData();
};

