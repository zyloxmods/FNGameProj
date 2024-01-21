#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ObjectiveFinishedDisplayingDelegate.h"
#include "FortQuestObjectiveEntry.generated.h"

class UFortQuestObjectiveInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestObjectiveEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveFinishedDisplaying OnFinishedDisplaying;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestObjectiveInfo* MyObjectiveInfo;
    
public:
    UFortQuestObjectiveEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDisplayingObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveInfoSet(const UFortQuestObjectiveInfo* ObjectiveInfo, bool IsAnnouncement);
    
};

