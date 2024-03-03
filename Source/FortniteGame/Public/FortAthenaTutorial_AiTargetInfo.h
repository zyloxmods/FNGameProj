#pragma once
#include "CoreMinimal.h"
#include "FortAthenaTutorial_AiTargetInfo.generated.h"

class AActor;
class AFortAIPawn;

USTRUCT(BlueprintType)
struct FFortAthenaTutorial_AiTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAIPawn* TargetActor;
    
    FORTNITEGAME_API FFortAthenaTutorial_AiTargetInfo();
};

