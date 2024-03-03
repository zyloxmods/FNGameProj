#pragma once
#include "CoreMinimal.h"
#include "FortGameplayMutator.h"
#include "FortAthenaMutator.generated.h"

class AFortGameModeAthena;
class AFortGameStateAthena;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator : public AFortGameplayMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMutatesGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMutatesGameState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CachedGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
public:

};

