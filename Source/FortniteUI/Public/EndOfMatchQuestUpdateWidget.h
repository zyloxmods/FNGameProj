#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "QuestRecapData.h"
#include "EndOfMatchQuestUpdateWidget.generated.h"

class UAthenaChallengeRecapEntry;
class UDynamicEntryBox;
class UFortQuestItem;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UEndOfMatchQuestUpdateWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FQuestRecapData> QuestUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaChallengeRecapEntry*> CreatedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumQuestWidgets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_QuestUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Quest;
    
public:
    UEndOfMatchQuestUpdateWidget();
    UFUNCTION(BlueprintCallable)
    void TryToShowNextQuestUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RunIntroAnim();
    
    UFUNCTION(BlueprintCallable)
    void QuestUpdated(UFortQuestItem* InUpdateData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void QuestUpdateCompleted(UAthenaChallengeRecapEntry* EntryWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleTileFocused(UCommonUserWidget* QuestEntry);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishedUpdateingQuests();
    
};

