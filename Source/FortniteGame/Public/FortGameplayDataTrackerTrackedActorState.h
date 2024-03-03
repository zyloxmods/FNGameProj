#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameplayDataTrackerTrackedActorState.generated.h"

class AActor;
class ABuildingActor;
class AFortPawn;

USTRUCT(BlueprintType)
struct FFortGameplayDataTrackerTrackedActorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TrackedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* TrackedActorAsPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* TrackedActorAsBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasUnprocessedStateEntry;
    
public:
    FORTNITEGAME_API FFortGameplayDataTrackerTrackedActorState();
};

