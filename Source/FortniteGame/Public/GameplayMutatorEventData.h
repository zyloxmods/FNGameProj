#pragma once
#include "CoreMinimal.h"
#include "GameplayMutatorEventData.generated.h"

USTRUCT(BlueprintType)
struct FGameplayMutatorEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventParam1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventParam2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventParam3;
    
    FORTNITEGAME_API FGameplayMutatorEventData();
};

