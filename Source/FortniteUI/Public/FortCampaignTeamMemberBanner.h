#pragma once
#include "CoreMinimal.h"
#include "FortCampaignTeamMemberEntry.h"
#include "FortCampaignTeamMemberBanner.generated.h"

class UFortPlayerBanner;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCampaignTeamMemberBanner : public UFortCampaignTeamMemberEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerBanner* Banner_MemberBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_LeaderIcon;
    
public:
    UFortCampaignTeamMemberBanner();
};

