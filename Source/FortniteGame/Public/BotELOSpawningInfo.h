#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_SpawningPolicyData.h"
#include "BotELOSpawningInfo.generated.h"

class AFortGameModeAthena;
class UFortAthenaMutator_PlayerBotSpawningPolicyData;

UCLASS(Blueprintable, EditInlineNew)
class UBotELOSpawningInfo : public UFortAthenaMutator_SpawningPolicyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaMutator_PlayerBotSpawningPolicyData* BotSpawningDataInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CachedGameMode;
    
    UBotELOSpawningInfo();
};

