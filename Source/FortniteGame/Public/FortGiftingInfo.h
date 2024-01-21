#pragma once
#include "CoreMinimal.h"
#include "FortGiftingInfo.generated.h"

class UFortHeroType;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortGiftingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHeroType* HeroType;
    
    FFortGiftingInfo();
};

