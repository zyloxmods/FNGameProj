#pragma once
#include "CoreMinimal.h"
#include "FortAISystem.h"
#include "AthenaAISystem.generated.h"

class AAthenaAIController;
class UAthenaAIDropper;
class UAthenaAIPerceptionManager;
class UAthenaBehaviorTreeComponent;
class UAthenaPathFollowingComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaAISystem : public UFortAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAIPerceptionManager* PerceptionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAIDropper* AIDropper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAthenaAIController*> AIControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaBehaviorTreeComponent*> BTComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaPathFollowingComponent*> PathFollowingComponents;
    
public:
    UAthenaAISystem();
};

