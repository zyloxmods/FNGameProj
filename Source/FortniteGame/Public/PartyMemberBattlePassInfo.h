#pragma once
#include "CoreMinimal.h"
#include "PartyMemberBattlePassInfo.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberBattlePassInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPurchasedPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PassLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelfBoostXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FriendBoostXp;
    
    FORTNITEGAME_API FPartyMemberBattlePassInfo();
};

