#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CosmeticMetaTagStack.generated.h"

USTRUCT(BlueprintType)
struct FCosmeticMetaTagStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CurrentState;
    
    FORTNITEGAME_API FCosmeticMetaTagStack();
};

