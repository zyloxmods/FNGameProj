#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "CampaignTopBar.generated.h"

class UDataTable;
class UFortPhoenixSeasonDisplayInfo;
class URestrictedCountryRatingIcons;

UCLASS(Blueprintable, EditInlineNew)
class UCampaignTopBar : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PhoenixSeasonDisplayInfoMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URestrictedCountryRatingIcons* RatingIcons_RatingIcons;
    
public:
    UCampaignTopBar();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPhoenixSeasonDisplayInfo* TryGetCurrentPhoenixSeasonDisplayInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnlineFriendsCount(int32 NewOnlineFriendsCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveInvitesCount(int32 NewActiveInvitesCount);
    
};

