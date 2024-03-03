#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaChallengesWidget.generated.h"

class UCommonTextBlock;
class UDynamicEntryBox;
class UFortQuestObjectiveInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengesWidget : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Challenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* DynamicEntryBox_ChallengeEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizedWidgetData;
    
public:
    UAthenaChallengesWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_WidgetIsFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetActivated();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

