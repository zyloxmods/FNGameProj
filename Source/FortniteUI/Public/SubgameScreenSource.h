#pragma once
#include "CoreMinimal.h"
#include "SubgameDisplayData.h"
#include "SubgameScreenSource.generated.h"

USTRUCT(BlueprintType)
struct FSubgameScreenSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString __locale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubgameDisplayData Creative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubgameDisplayData SaveTheWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubgameDisplayData BattleRoyale;
    
    FORTNITEUI_API FSubgameScreenSource();
};

