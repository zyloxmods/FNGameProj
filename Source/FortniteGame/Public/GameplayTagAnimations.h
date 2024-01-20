#pragma once
#include "CoreMinimal.h"
#include "GameplayTagAnimationData.h"
#include "GameplayTagAnimations.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagAnimations {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagAnimationData> GameplayTagAnimData;
    
public:
    FORTNITEGAME_API FGameplayTagAnimations();
};

