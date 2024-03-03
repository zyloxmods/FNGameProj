#pragma once
#include "CoreMinimal.h"
#include "FortGameplayDataTrackerActorStateConfig.h"
#include "FortGameplayDataTrackerTrackedActorState.h"
#include "FortGameplayDataTrackerActorStateGroupConfig.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortGameplayDataTrackerActorStateGroupConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> RelevantActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDBNOPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerActorStateConfig> StateConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerTrackedActorState> ActorStates;
    
    FORTNITEGAME_API FFortGameplayDataTrackerActorStateGroupConfig();
};

