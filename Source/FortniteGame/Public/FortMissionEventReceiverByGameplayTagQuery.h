#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMissionEventReceiverByGameplayTagQuery.generated.h"

class UFortMissionEventDelegateHolder;

USTRUCT(BlueprintType)
struct FFortMissionEventReceiverByGameplayTagQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQueryEventDiscriminator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMissionEventDelegateHolder* DelegateHolder;
    
    FORTNITEGAME_API FFortMissionEventReceiverByGameplayTagQuery();
};

