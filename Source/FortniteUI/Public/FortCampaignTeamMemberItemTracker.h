#pragma once
#include "CoreMinimal.h"
#include "FortCampaignTeamMemberEntry.h"
#include "FortCampaignTeamMemberItemTracker.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCampaignTeamMemberItemTracker : public UFortCampaignTeamMemberEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TemplateIdsToTrack;
    
public:
    UFortCampaignTeamMemberItemTracker();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrackedItemsUpdated();
    
};

