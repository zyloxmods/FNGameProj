#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AthenaAIService.generated.h"

class AFortGameModeAthena;
class AFortGameStateAthena;
class UAthenaAIServiceManager;

UCLASS(Abstract, Blueprintable)
class UAthenaAIService : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CachedGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAIServiceManager* AIServiceManager;
    
public:
    UAthenaAIService();
};

