#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameplayDataTrackerRegisteredActorData.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayDataTrackerRegisteredActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentStateTag;
    
    FORTNITEGAME_API FFortGameplayDataTrackerRegisteredActorData();
};

