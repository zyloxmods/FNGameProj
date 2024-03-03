#pragma once
#include "CoreMinimal.h"
#include "FactionHostileRelation.generated.h"

class AActor;
class AFortPawn;

USTRUCT(BlueprintType)
struct FFactionHostileRelation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HostileActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPawn*> HostileTo;
    
    FORTNITEGAME_API FFactionHostileRelation();
};

