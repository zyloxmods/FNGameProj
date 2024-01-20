#pragma once
#include "CoreMinimal.h"
#include "TeamMapInfo.generated.h"

USTRUCT(BlueprintType)
struct FTeamMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ReplicatedSeedPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    FORTNITEGAME_API FTeamMapInfo();
};

