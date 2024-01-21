#pragma once
#include "CoreMinimal.h"
#include "FortAimAssist2D_Target.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortAimAssist2D_Target {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FORTNITEGAME_API FFortAimAssist2D_Target();
};

