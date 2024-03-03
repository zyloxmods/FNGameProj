#pragma once
#include "CoreMinimal.h"
#include "HoverDronePawn.h"
#include "AutoFrameDronePawn.generated.h"

class AActor;

UCLASS(Blueprintable)
class AAutoFrameDronePawn : public AHoverDronePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> TrackedActorTimes;
    
public:
    AAutoFrameDronePawn();
};

