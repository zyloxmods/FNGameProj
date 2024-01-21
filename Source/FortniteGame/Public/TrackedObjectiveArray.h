#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TrackedObjective.h"
#include "TrackedObjectiveArray.generated.h"

USTRUCT(BlueprintType)
struct FTrackedObjectiveArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTrackedObjective> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextTrackedIndex;
    
    FORTNITEGAME_API FTrackedObjectiveArray();
};

