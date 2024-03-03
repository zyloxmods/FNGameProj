#pragma once
#include "CoreMinimal.h"
#include "AISystem.h"
#include "UObject/NoExportTypes.h"
#include "FortAISystem.generated.h"

class UFortBotMissionManager;
class UFortInfluenceMap;
class UFortQueryTwoPointSolver;
class UFortRiftBlockerComponent;

UCLASS(Blueprintable)
class UFortAISystem : public UAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortQueryTwoPointSolver*> TwoPointSolvers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInfluenceMap* InfluenceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortBotMissionManager* BotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortRiftBlockerComponent*> ActiveRiftBlockers;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInCone2D(FVector ConeOrigin, FVector ConeDirection, float HalfAngle, FVector LocationToCheck);
    
};

