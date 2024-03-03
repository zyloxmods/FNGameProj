#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WorkerSetBonusState.generated.h"

USTRUCT(BlueprintType)
struct FWorkerSetBonusState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SetBonusTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMatchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredMatchCountToActivate;
    
    FORTNITEGAME_API FWorkerSetBonusState();
};

