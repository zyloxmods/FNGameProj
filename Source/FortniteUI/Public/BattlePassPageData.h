#pragma once
#include "CoreMinimal.h"
#include "BattlePassPageData.generated.h"

USTRUCT(BlueprintType)
struct FBattlePassPageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StartingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EndingIndex;
    
    FORTNITEUI_API FBattlePassPageData();
};

