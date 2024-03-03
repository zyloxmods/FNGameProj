#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameFramework/OnlineReplStructs.h"
#include "PrivateTeamDataItem.generated.h"

USTRUCT(BlueprintType)
struct FPrivateTeamDataItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerId;
    
    FORTNITEGAME_API FPrivateTeamDataItem();
};

