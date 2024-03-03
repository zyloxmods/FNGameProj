#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "CurieStateBehaviorContainer.generated.h"

class UCurieEntityStateBehavior;

USTRUCT(BlueprintType)
struct CURIE_API FCurieStateBehaviorContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCurieEntityStateBehavior> StateBehaviorClass;
    
public:
    FCurieStateBehaviorContainer();
};

