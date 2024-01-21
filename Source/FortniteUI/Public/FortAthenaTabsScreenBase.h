#pragma once
#include "CoreMinimal.h"
#include "EFortUIFeature.h"
#include "EFortUIFeatureState.h"
#include "EFortUIFeatureStateReason.h"
#include "FortActivatablePanel.h"
#include "FortAthenaTabsScreenBase.generated.h"

class UFortTabListWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaTabsScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortUIFeature, FName> FeaturesTabsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TopTabList;
    
public:
    UFortAthenaTabsScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowReplayBrowser();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnlineFriendsCount(int32 NewOnlineFriendsCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveInvitesCount(int32 NewActiveInvitesCount);
    
    UFUNCTION(BlueprintCallable)
    void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void HandleFeatureNavigateRequest(EFortUIFeature Feature);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowSeasonShopTab() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowPrototypeTab(FName TabNameID) const;
    
};

