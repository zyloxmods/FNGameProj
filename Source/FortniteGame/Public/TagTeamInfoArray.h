#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TagTeamInfoEntry.h"
#include "TagTeamInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FTagTeamInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagTeamInfoEntry> Entries;
    
    FORTNITEGAME_API FTagTeamInfoArray();
};

