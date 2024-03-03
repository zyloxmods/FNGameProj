#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortHUDObjectiveSizeInterface.h"
#include "OnHUDQuestFinalObjectiveHiddenDelegate.h"
#include "OnSizeEstimateChangedDelegate.h"
#include "FortQuestTrackerEntry.generated.h"

class UCommonListView;
class UCommonTextBlock;
class UFortQuestItem;
class UFortQuestObjectiveInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestTrackerEntry : public UCommonUserWidget, public IUserObjectListEntry, public IFortHUDObjectiveSizeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* QuestNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ObjectivesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItem* TrackedQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDQuestFinalObjectiveHidden OnHUDQuestFinalObjectiveHiddenDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestObjectiveInfo*> HUDCachedObjectiveInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfigureAsHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSizeEstimateChanged OnSizeEstimateChangedDelegate;
    
public:
    UFortQuestTrackerEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable)
    void HandleHUDObjectiveCompletion(UFortQuestObjectiveInfo* QuestObjective);
    
    
    // Fix for true pure virtual functions not being implemented
};

