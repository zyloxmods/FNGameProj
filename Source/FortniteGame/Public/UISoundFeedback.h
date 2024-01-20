#pragma once
#include "CoreMinimal.h"
#include "UISoundFeedback.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FUISoundFeedback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> UISound;
    
    FORTNITEGAME_API FUISoundFeedback();
};

