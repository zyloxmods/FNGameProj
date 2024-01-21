#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TeamSpottedActorInfo.h"
#include "TeamSpottedActorInfoArray.generated.h"

class AFortTeamInfo;

USTRUCT(BlueprintType)
struct FTeamSpottedActorInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamSpottedActorInfo> SpottedActorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AFortTeamInfo* OwningTeam;
    
public:
    FORTNITEGAME_API FTeamSpottedActorInfoArray();
};

