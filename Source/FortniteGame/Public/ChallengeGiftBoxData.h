#pragma once
#include "CoreMinimal.h"
#include "FortGiftBoxFortmatData.h"
#include "ChallengeGiftBoxData.generated.h"

class UFortGiftBoxItemDefinition;

USTRUCT(BlueprintType)
struct FChallengeGiftBoxData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortGiftBoxItemDefinition> GiftBoxToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGiftBoxFortmatData> GiftBoxFormatData;
    
    FORTNITEGAME_API FChallengeGiftBoxData();
};

