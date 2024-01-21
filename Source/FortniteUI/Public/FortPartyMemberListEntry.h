#pragma once
#include "CoreMinimal.h"
#include "SocialListEntry.h"
#include "FortPartyMemberListEntry.generated.h"

class UFortPartyMember;
class UFortSocialAvatarIcon;
class UFortVoiceChatStatusIcon;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPartyMemberListEntry : public USocialListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPartyMember* PartyMember;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Crown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_EncourageEpicFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* AvatarIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* VoiceIcon_Status;
    
public:
    UFortPartyMemberListEntry();
};

