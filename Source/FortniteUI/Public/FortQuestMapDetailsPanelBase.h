#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "FortQuestMapDetailsPanelBase.generated.h"

class AFortClientAnnouncement_Conversation;
class UFortQuestItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestMapDetailsPanelBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortClientAnnouncement_Conversation> QuestConversationClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestUpdateDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle QuestUpdateTimerHandle;
    
public:
    UFortQuestMapDetailsPanelBase();
    UFUNCTION(BlueprintCallable)
    void SetScrollWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetQuestToDisplay(UFortQuestItemDefinition* QuestDef);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestsUpdatedInternal();
    
};

