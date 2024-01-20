#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortHUDObjectiveSizeInterface.h"
#include "OnMissionSubEntryVisibilityChangedDelegate.h"
#include "OnSizeEstimateChangedDelegate.h"
#include "FortMissionTrackerSubEntry.generated.h"

class AFortObjectiveBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMissionTrackerSubEntry : public UCommonUserWidget, public IFortHUDObjectiveSizeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionSubEntryVisibilityChanged OnMissionSubEntryVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfigureAsHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenByHeightConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortObjectiveBase* TrackedObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSizeEstimateChanged OnSizeEstimateChangedDelegate;
    
public:
    UFortMissionTrackerSubEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHiddenByHeightConstraintChanged();
    
    UFUNCTION(BlueprintCallable)
    void NotifyVisibilityChanged();
    
    
    // Fix for true pure virtual functions not being implemented
};

