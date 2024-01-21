#pragma once
#include "CoreMinimal.h"
#include "FortCampaignTeamMemberEntry.h"
#include "FortCampaignTeamMemberInfo.generated.h"

class UCommonButton;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortPlayerBanner;
class UFortPlayerPowerRating;
class UFortVoiceChatStatusIcon;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCampaignTeamMemberInfo : public UFortCampaignTeamMemberEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MenuButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerBanner* Banner_MemberBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerPowerRating* PowerRating_MemberRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MemberName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_LeaderIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* VoiceIcon_Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Fortitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Offense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Resistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Technology;
    
public:
    UFortCampaignTeamMemberInfo();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalTeamMemberParticipationChanged(bool bIsParticipating);
    
};

