#pragma once
#include "CoreMinimal.h"
#include "SubGameInfo.generated.h"

class UFortTokenType;

USTRUCT(BlueprintType)
struct FSubGameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTokenType* AccessToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequiredFullInstall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPartyWithoutFullInstall;
    
    FORTNITEGAME_API FSubGameInfo();
};

