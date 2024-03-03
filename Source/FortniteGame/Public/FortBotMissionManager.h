#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortBotMissionManager.generated.h"

class AFortPawn;
class UFortBotMissionLogic;

UCLASS(Blueprintable)
class UFortBotMissionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortPawn> BotPawnClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPawn*> BotPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortBotMissionLogic*> ActiveMissionsLogicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortBotMissionLogic* PrimaryMissionLogicData;
    
public:
    UFortBotMissionManager();
};

