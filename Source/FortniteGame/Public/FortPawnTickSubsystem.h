#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FortPawnTickSubsystem.generated.h"

class AFortPlayerPawn;

UCLASS(Blueprintable)
class UFortPawnTickSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> Pawns;
    
public:
    UFortPawnTickSubsystem();
};

