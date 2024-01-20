#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PrivateTeamDataItem.h"
#include "PrivateTeamDataArray.generated.h"

USTRUCT(BlueprintType)
struct FPrivateTeamDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrivateTeamDataItem> Items;
    
    FORTNITEGAME_API FPrivateTeamDataArray();
};

