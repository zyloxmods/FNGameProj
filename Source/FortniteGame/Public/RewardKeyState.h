#pragma once
#include "CoreMinimal.h"
#include "RewardKeyState.generated.h"

USTRUCT(BlueprintType)
struct FRewardKeyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString static_key_template_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 unlock_keys_used;
    
    FORTNITEGAME_API FRewardKeyState();
};

