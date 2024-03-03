#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "ETutorialType.h"
#include "FortClientAnnouncementData_Tutorial.h"
#include "OnNewClientAnnouncementOnClientDelegateDelegate.h"
#include "FortUITutorialData.h"
#include "UpdateTutorialAnnouncementDelegateDelegate.h"
#include "FortTutorialContext.generated.h"

class AFortClientAnnouncement;
class UFortQuestItem;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortTutorialContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateTutorialAnnouncementDelegate OnUpdateTutorialAnnouncement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewClientAnnouncementOnClientDelegate OnNewAnnouncementStartedOnClientDelegate;
    
    UFortTutorialContext();
    UFUNCTION(BlueprintCallable)
    void UpdateTutorialAnnouncement(FFortClientAnnouncementData_Tutorial AnnouncementData, bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void UnhideTutorialCallout(FName WidgetName, FName TutorialQuestObjectiveName, ETutorialType TutorialType);
    
    UFUNCTION(BlueprintCallable)
    void UnhideAllTutorialCallouts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortClientAnnouncement* TryGetActivePrimaryAnnouncement() const;
    
    UFUNCTION(BlueprintCallable)
    void TryClearingPendingQuest(UFortQuestItem* Quest);
    
    UFUNCTION(BlueprintCallable)
    void StartTutorial(FName WidgetName, ETutorialType TutorialType);
    
    UFUNCTION(BlueprintCallable)
    void SkipTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPromptToSkipTutorial() const;
    
    UFUNCTION(BlueprintCallable)
    void OnNewAnnouncementStartedOnClient(AFortClientAnnouncement* NewAnnouncement);
    
    UFUNCTION(BlueprintCallable)
    bool IsTutorialCalloutVisible(FName WidgetName);
    
    UFUNCTION(BlueprintCallable)
    bool IsObjectiveNextTutorialObjective(UFortQuestItem* Quest, FName TutorialObjectiveName);
    
    UFUNCTION(BlueprintCallable)
    void HideTutorialCallout(FName WidgetName, FName TutorialQuestObjectiveName, ETutorialType TutorialType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTutorialData(const FName TutorialObjectiveName, FFortUITutorialData& OutTutorialData) const;
    
    UFUNCTION(BlueprintCallable)
    void GetTutorialCallouts(TArray<FName>& WidgetNames);
    
    UFUNCTION(BlueprintCallable)
    void GetHiddenTutorialCallouts(TArray<FName>& WidgetNames);
    
    UFUNCTION(BlueprintCallable)
    void FinishTutorial(UFortQuestItem* Quest, FName WidgetName, ETutorialType TutorialType);
    
    UFUNCTION(BlueprintCallable)
    void EnableTutorialCallout(FName WidgetName, FName TutorialQuestObjectiveName, ETutorialType TutorialType);
    
    UFUNCTION(BlueprintCallable)
    void DisableTutorialCallout(FName WidgetName, FName TutorialQuestObjectiveName, ETutorialType TutorialType);
    
    UFUNCTION(BlueprintCallable)
    void ContinueTutorial();
    
    UFUNCTION(BlueprintCallable)
    void ClearTutorialCallouts();
    
    UFUNCTION(BlueprintCallable)
    bool CanStartTutorial(UFortQuestItem* Quest, FName WidgetName, ETutorialType TutorialType);
    
};

