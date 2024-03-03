#pragma once
#include "CoreMinimal.h"
#include "FortVoiceChatStatusIcon.h"
#include "FortVoiceChatStatusIconProxyAnim.generated.h"

UCLASS(Blueprintable)
class UFortVoiceChatStatusIconProxyAnim : public UFortVoiceChatStatusIcon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkingRampUpSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkingRampDownSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkingUpdatesPerSecond;
    
public:
    UFortVoiceChatStatusIconProxyAnim();
};

