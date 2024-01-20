#pragma once
#include "CoreMinimal.h"
#include "FortPlayerControllerPvE.h"
#include "FortPlayerControllerBoss.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerBoss : public AFortPlayerControllerPvE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName LastPossessedPawn;
    
    AFortPlayerControllerBoss();
};

