#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortHUDObjectiveSizeInterface.h"
#include "OnHUDQuestObjectiveCompletedDelegate.h"
#include "OnSizeEstimateChangedDelegate.h"
#include "FortQuestTrackerSubEntry.generated.h"

class UFortQuestObjectiveInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestTrackerSubEntry : public UCommonUserWidget, public IUserObjectListEntry, public IFortHUDObjectiveSizeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestObjectiveInfo* TrackedObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSizeEstimateChanged OnSizeEstimateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDQuestObjectiveCompleted OnHUDQuestObjectiveCompletedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfigureAsHUD;
    
public:
    UFortQuestTrackerSubEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuestsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayObjectiveCompletedAnimation();
    
    UFUNCTION(BlueprintCallable)
    void NotifyCompletionAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleQuestsUpdated();
    
    
    // Fix for true pure virtual functions not being implemented
};

