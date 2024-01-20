#pragma once
#include "CoreMinimal.h"
#include "IgnoredPawn.generated.h"

class AFortPawn;

USTRUCT(BlueprintType)
struct FIgnoredPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Time;
    
    FORTNITEGAME_API FIgnoredPawn();
};

