#pragma once
#include "CoreMinimal.h"
#include "EFortAnnouncementDisplayPreference.h"
#include "FortClientAnnouncementData.h"
#include "FortClientAnnouncementData_Conversation.generated.h"

class UFortConversation;

USTRUCT(BlueprintType)
struct FFortClientAnnouncementData_Conversation : public FFortClientAnnouncementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortConversation* Conversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAnnouncementDisplayPreference ConversationDisplayPreference;
    
    FORTNITEGAME_API FFortClientAnnouncementData_Conversation();
};

