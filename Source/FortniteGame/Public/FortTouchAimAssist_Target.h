#pragma once
#include "CoreMinimal.h"
#include "FortTouchAimAssist_Target.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFortTouchAimAssist_Target {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FORTNITEGAME_API FFortTouchAimAssist_Target();
};

