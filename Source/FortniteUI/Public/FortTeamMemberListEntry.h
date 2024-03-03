#pragma once
#include "CoreMinimal.h"
#include "FortPresenceUserListEntry.h"
#include "FortTeamMemberListEntry.generated.h"

class UFortVoiceChatStatusIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTeamMemberListEntry : public UFortPresenceUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* VoiceIcon_Status;
    
public:
    UFortTeamMemberListEntry();
};

