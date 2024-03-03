#pragma once
#include "CoreMinimal.h"
#include "FortBotReservedLoot.h"
#include "FortBotTeamInfoAthena.generated.h"

USTRUCT(BlueprintType)
struct FFortBotTeamInfoAthena {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortBotReservedLoot> ReservedLoots;
    
public:
    FORTNITEGAME_API FFortBotTeamInfoAthena();
};

