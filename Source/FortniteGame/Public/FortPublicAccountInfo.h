#pragma once
#include "CoreMinimal.h"
#include "AthenaLevelInfo.h"
#include "FortPublicAccountInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortPublicAccountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelXpForLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaLevelInfo BattleRoyaleLevel;
    
    FORTNITEGAME_API FFortPublicAccountInfo();
};

