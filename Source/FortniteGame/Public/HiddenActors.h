#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HiddenActors.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHiddenActors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag RewardEventGraphNode;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> HiddenActors;
    
    FORTNITEGAME_API FHiddenActors();
};

