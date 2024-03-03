#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCampaignMatchmakingBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCampaignMatchmakingBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortCampaignMatchmakingBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamMembershipChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameReadinessChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerParticipatingInParty() const;
    
};

