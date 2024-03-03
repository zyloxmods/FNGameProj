#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MontageItemAccessData.generated.h"

class UFortItemAccessTokenType;

USTRUCT(BlueprintType)
struct FMontageItemAccessData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AccessTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemAccessTokenType* AccessToken;
    
    FORTNITEGAME_API FMontageItemAccessData();
};

