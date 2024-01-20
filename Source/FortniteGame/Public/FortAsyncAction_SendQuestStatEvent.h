#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "FortSendQuestStatEventDelegateDelegate.h"
#include "FortAsyncAction_SendQuestStatEvent.generated.h"

class UFortAsyncAction_SendQuestStatEvent;
class UFortQuestManager;

UCLASS(Blueprintable)
class UFortAsyncAction_SendQuestStatEvent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSendQuestStatEventDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSendQuestStatEventDelegate OnIgnored;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSendQuestStatEventDelegate OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestManager* QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ObjectiveStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Count;
    
public:
    UFortAsyncAction_SendQuestStatEvent();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_SendQuestStatEvent* SendClientStatEventWithTags(UFortQuestManager* NewQuestManager, FGameplayTagContainer NewTargetTags, FGameplayTagContainer NewSourceTags, FGameplayTagContainer NewContextTags, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_SendQuestStatEvent* SendClientStatEvent(UFortQuestManager* NewQuestManager, FDataTableRowHandle NewObjectiveStat, int32 NewCount);
    
};

