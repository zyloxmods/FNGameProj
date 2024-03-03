#pragma once
#include "CoreMinimal.h"
#include "VoiceChatLogUploadRule.generated.h"

USTRUCT(BlueprintType)
struct FVoiceChatLogUploadRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LogSubmitChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorCode;
    
    FORTNITEGAME_API FVoiceChatLogUploadRule();
};

