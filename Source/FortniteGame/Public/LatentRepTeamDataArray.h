#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "LatentRepPlayerData.h"
#include "LatentRepTeamDataArray.generated.h"

USTRUCT(BlueprintType)
struct FLatentRepTeamDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLatentRepPlayerData> PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrPlayerUpdateIndex;
    
    FORTNITEGAME_API FLatentRepTeamDataArray();
};

