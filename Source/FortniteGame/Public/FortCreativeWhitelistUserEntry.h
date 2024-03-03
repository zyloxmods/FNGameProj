#pragma once
#include "CoreMinimal.h"
#include "FortCreativeWhitelistUserEntry.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeWhitelistUserEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserName;
    
    FORTNITEGAME_API FFortCreativeWhitelistUserEntry();
};

