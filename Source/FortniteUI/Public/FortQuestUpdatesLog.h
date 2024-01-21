#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "Templates/SubclassOf.h"
#include "FortQuestUpdatesLog.generated.h"

class UFortQuestObjectiveInfo;
class UFortQuestUpdateEntry;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestUpdatesLog : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortQuestUpdateEntry> QuestEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDisplayedQuestUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDisplayedQuestObjectives;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* QuestUpdatesBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestUpdateEntry*> QuestUpdateWidgets;
    
public:
    UFortQuestUpdatesLog();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleQuestUpdateFinished(UFortQuestUpdateEntry* QuestEntryFinished);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateAnnouncementUpdate(const UFortQuestObjectiveInfo* QuestItemToCheck);
    
};

