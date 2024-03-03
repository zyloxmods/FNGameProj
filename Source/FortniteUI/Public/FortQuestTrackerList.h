#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortHUDObjectiveSizeInterface.h"
#include "OnSizeEstimateChangedDelegate.h"
#include "FortQuestTrackerList.generated.h"

class UCommonListView;
class UFortQuestItem;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestTrackerList : public UCommonUserWidget, public IFortHUDObjectiveSizeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfigureAsHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* QuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> HUDCachedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSizeEstimateChanged OnSizeEstimateChangedDelegate;
    
public:
    UFortQuestTrackerList();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSizeEstimateChanged(UObject* ChangedElement);
    
    UFUNCTION(BlueprintCallable)
    void HandleQuestsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void HandlePinnedQuestsChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleHUDFinalObjectiveHidden(UFortQuestItem* QuestItem);
    
    UFUNCTION(BlueprintCallable)
    TArray<UFortQuestItem*> GetVisibleQuestsToDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UFortQuestItem*> GetQuestsToDisplay();
    
    
    // Fix for true pure virtual functions not being implemented
};

