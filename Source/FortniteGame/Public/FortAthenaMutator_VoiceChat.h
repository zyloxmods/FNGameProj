#pragma once
#include "CoreMinimal.h"
#include "EFortAthenaMutator_VoiceChatChannelType.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_VoiceChat.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_VoiceChat : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAthenaMutator_VoiceChatChannelType ChannelType;
    
public:
    AFortAthenaMutator_VoiceChat();
};

