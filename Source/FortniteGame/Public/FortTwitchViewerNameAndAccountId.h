#pragma once
#include "CoreMinimal.h"
#include "FortTwitchViewerNameAndAccountId.generated.h"

USTRUCT(BlueprintType)
struct FFortTwitchViewerNameAndAccountId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TwitchViewerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountId;
    
    FORTNITEGAME_API FFortTwitchViewerNameAndAccountId();
};

