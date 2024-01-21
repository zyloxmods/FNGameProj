#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TagTeamInfoEntry.generated.h"

USTRUCT(BlueprintType)
struct FTagTeamInfoEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 PreviousPlayerCount;
    
    FORTNITEGAME_API FTagTeamInfoEntry();
};

