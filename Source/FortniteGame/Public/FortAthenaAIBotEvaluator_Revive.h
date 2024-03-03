#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Movement.h"
#include "FortAthenaAIBotEvaluator_Revive.generated.h"

class AFortPlayerPawnAthena;
class UFortAthenaAIBotReviveDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_Revive : public UFortAthenaAIBotEvaluator_Movement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReviveTargetKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReviveSquadmates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReviveSameFactionNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReviveToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* CurrentReviveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawnAthena*> DBNOAllyPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotReviveDigestedSkillSet* ReviveSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_Revive();
};

