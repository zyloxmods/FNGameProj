#pragma once
#include "CoreMinimal.h"
#include "TargetInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    FORTNITEGAME_API FTargetInfo();
};

