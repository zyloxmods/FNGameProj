#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortJournalQuestProgressBar.generated.h"

class UFortQuestObjectiveInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortJournalQuestProgressBar : public UCommonUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortQuestObjectiveInfo> QuestObjectiveInfo;
    
public:
    UFortJournalQuestProgressBar();
protected:
    UFUNCTION(BlueprintCallable)
    void GetProgressDetails(FText& OutNumerator, FText& OutDenominator, float& OutFraction);
    
    
    // Fix for true pure virtual functions not being implemented
};

