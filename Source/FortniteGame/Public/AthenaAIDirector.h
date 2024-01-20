#pragma once
#include "CoreMinimal.h"
#include "FortAIDirector.h"
#include "AthenaAIDirector.generated.h"

class AFortAthenaAIBotController;
class AFortPlayerPawn;

UCLASS(Blueprintable)
class FORTNITEGAME_API AAthenaAIDirector : public AFortAIDirector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaAIBotController*> AIBotControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> AIBotPawns;
    
public:
    AAthenaAIDirector();
};

