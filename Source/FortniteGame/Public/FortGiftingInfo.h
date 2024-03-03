#pragma once
#include "CoreMinimal.h"
#include "FortGiftingInfo.generated.h"

class UFortHeroType;

USTRUCT(BlueprintType)
struct FFortGiftingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHeroType* HeroType;
    
    FORTNITEGAME_API FFortGiftingInfo();
};

