#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataIntegrityPair.generated.h"

class AFortAthenaMutator_Bots;
class APawn;
class UFortAthenaAISpawnerData;
class UFortAthenaMutator_PlayerBotSpawningPolicyData;

USTRUCT(BlueprintType)
struct FDataIntegrityPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthenaMutator_Bots> BotMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaMutator_PlayerBotSpawningPolicyData> BotPolicyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* MutatorPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerData> AISpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* AISpawnerPawn;
    
    FORTNITEGAME_API FDataIntegrityPair();
};

