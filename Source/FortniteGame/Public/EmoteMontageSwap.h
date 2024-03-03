#pragma once
#include "CoreMinimal.h"
#include "EmoteMontageSwap.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FEmoteMontageSwap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ToSwapFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ToSwapTo;
    
    FORTNITEGAME_API FEmoteMontageSwap();
};

