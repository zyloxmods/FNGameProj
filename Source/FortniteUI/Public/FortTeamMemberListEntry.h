#pragma once
#include "CoreMinimal.h"
#include "SocialListEntry.h"
#include "FortTeamMemberListEntry.generated.h"

class UCommonRichTextBlock;
class UFortSocialAvatarIcon;
class UFortTeamMemberItem;
class UFortVoiceChatStatusIcon;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTeamMemberListEntry : public USocialListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTeamMemberItem* TeamMemberItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_EncourageEpicFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* SocialAvatarIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* VoiceIcon_Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_GamePresence;
    
public:
    UFortTeamMemberListEntry();
};

