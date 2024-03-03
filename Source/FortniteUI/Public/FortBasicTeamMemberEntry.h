#pragma once
#include "CoreMinimal.h"
#include "FortTeamMemberEntryBase.h"
#include "FortBasicTeamMemberEntry.generated.h"

class UFortPlayerBanner;
class UFortSocialNameTextBlock;
class UFortVoiceChatStatusIcon;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBasicTeamMemberEntry : public UFortTeamMemberEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlatformIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerBanner* Banner_MemberBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialNameTextBlock* Text_SocialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_LeaderIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* VoiceIcon_Status;
    
public:
    UFortBasicTeamMemberEntry();
};

