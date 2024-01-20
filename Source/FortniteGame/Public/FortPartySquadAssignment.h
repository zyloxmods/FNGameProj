#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortPartySquadAssignment.generated.h"

USTRUCT(BlueprintType)
struct FFortPartySquadAssignment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl MemberId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsoluteMemberIdx;
    
    FORTNITEGAME_API FFortPartySquadAssignment();
};

