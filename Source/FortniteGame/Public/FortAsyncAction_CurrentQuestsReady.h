#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnCurrentQuestsReadyDelegate.h"
#include "FortAsyncAction_CurrentQuestsReady.generated.h"

class UFortAsyncAction_CurrentQuestsReady;
class UFortQuestItemDefinition;
class UFortQuestManager;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_CurrentQuestsReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentQuestsReady OnCurrentQuestsReady;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestManager* MyQuestManager;
    
public:
    UFortAsyncAction_CurrentQuestsReady();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_CurrentQuestsReady* CurrentQuestsReadyAsync(UObject* WorldContextObject, UFortQuestManager* QuestManager, const TArray<UFortQuestItemDefinition*>& QuestItemDefinitions);
    
};

