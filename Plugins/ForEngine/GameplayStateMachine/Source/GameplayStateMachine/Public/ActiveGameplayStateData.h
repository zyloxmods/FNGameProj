#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActiveGameplayStateData.generated.h"

class UGameplayState;

USTRUCT(BlueprintType)
struct GAMEPLAYSTATEMACHINE_API FActiveGameplayStateData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayState* GameplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag PreviousStateId;
    
public:
    FActiveGameplayStateData();
};

