#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortSquadStatsWidgetBase.generated.h"

class UFortAttributeListItem_NUI;
class UFortAttributeList_NUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadStatsWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortAttributeListItem_NUI*> OverviewStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAttributeList_NUI* DetailedStats;
    
public:
    UFortSquadStatsWidgetBase();
    UFUNCTION(BlueprintCallable)
    void RequestStatsUpdate();
    
    UFUNCTION(BlueprintCallable)
    void RequestShowPreviewStats();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadSlottingPreviewStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePowerRatingChanged_BP(bool bHasTeamMebers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetLocalPlayerId() const;
    
};

