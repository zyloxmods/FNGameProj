#pragma once
#include "CoreMinimal.h"
#include "ChallengeSuppressedHotfix.generated.h"

USTRUCT(BlueprintType)
struct FChallengeSuppressedHotfix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Replacing;
    
    FORTNITEGAME_API FChallengeSuppressedHotfix();
};

