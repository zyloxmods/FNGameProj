#pragma once
#include "CoreMinimal.h"
#include "FortBotTeamInfoAthena.h"
#include "FortTeamInfo.h"
#include "FortTeamInfoAthena.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortTeamInfoAthena : public AFortTeamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortBotTeamInfoAthena BotInfo;
    
    AFortTeamInfoAthena();
};

