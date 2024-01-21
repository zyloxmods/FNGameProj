#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FinishedDisplayingQuestsDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortQuestUpdateEntry.generated.h"

class UFortQuestItem;
class UFortQuestObjectiveEntry;
class UFortQuestObjectiveInfo;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestUpdateEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedDisplayingQuests FinishedDisplayingQuests;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ObjectivesBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortQuestObjectiveEntry> SubEntryClass;
    
public:
    UFortQuestUpdateEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartQuestOutro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartQuestIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAsAnnouncement();
    
    UFUNCTION(BlueprintCallable)
    void SetQuestItem(const UFortQuestObjectiveInfo* ObjectiveInfo, bool IsAnnouncement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuestItemSet(UFortQuestItem* QuestItemToCheck);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumDisplayedObjectives();
    
    UFUNCTION(BlueprintCallable)
    void FinishQuestOutro();
    
    UFUNCTION(BlueprintCallable)
    void FinishQuestIntro();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CurrentlyDisplayedObjectiveFinished(UFortQuestObjectiveEntry* QuestObjective);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanAddObjective(UFortQuestItem* QuestItemToCheck);
    
};

