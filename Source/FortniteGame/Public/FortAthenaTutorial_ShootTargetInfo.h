#pragma once
#include "CoreMinimal.h"
#include "FortAthenaTutorial_ShootTargetInfo.generated.h"

class AActor;
class ABuildingProp;

USTRUCT(BlueprintType)
struct FFortAthenaTutorial_ShootTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ShootTargetMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingProp* ShootTarget;
    
    FORTNITEGAME_API FFortAthenaTutorial_ShootTargetInfo();
};

