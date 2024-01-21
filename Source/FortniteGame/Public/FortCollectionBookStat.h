#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookStat.generated.h"

USTRUCT(BlueprintType)
struct FFortCollectionBookStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBookXpLevelAchieved;
    
    FORTNITEGAME_API FFortCollectionBookStat();
};

