#pragma once
#include "CoreMinimal.h"
#include "FortAthenaTutorial_TargetInfo.generated.h"

class AActor;
class ABuildingProp;

USTRUCT(BlueprintType)
struct FFortAthenaTutorial_TargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingProp* TargetActor;
    
    FORTNITEGAME_API FFortAthenaTutorial_TargetInfo();
};

