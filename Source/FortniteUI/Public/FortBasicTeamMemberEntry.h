#pragma once
#include "CoreMinimal.h"
#include "FortTeamMemberEntryBase.h"
#include "FortBasicTeamMemberEntry.generated.h"

class UCommonRichTextBlock;
class UFortPlayerBanner;
class UFortVoiceChatStatusIcon;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBasicTeamMemberEntry : public UFortTeamMemberEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerBanner* Banner_MemberBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_MemberName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_LeaderIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* VoiceIcon_Status;
    
public:
    UFortBasicTeamMemberEntry();
};

