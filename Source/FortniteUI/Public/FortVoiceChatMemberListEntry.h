#pragma once
#include "CoreMinimal.h"
#include "FortPresenceUserListEntry.h"
#include "FortVoiceChatMemberListEntry.generated.h"

class UFortVoiceChatStatusIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortVoiceChatMemberListEntry : public UFortPresenceUserListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* VoiceIcon_Status;
    
public:
    UFortVoiceChatMemberListEntry();
};

