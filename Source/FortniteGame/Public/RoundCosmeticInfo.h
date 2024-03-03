#pragma once
#include "CoreMinimal.h"
#include "RoundCosmeticInfo.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FRoundCosmeticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RoundSound;
    
    FORTNITEGAME_API FRoundCosmeticInfo();
};

