#pragma once
#include "CoreMinimal.h"
#include "FortMissionTrackerInterface.h"
#include "FortHUDElementWidget.h"
#include "FortMissionTracker.generated.h"

class UCommonNumericTextBlock;
class UFortMissionTrackerList;
class UFortQuestTrackerList;
class UObject;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMissionTracker : public UFortHUDElementWidget, public IFortMissionTrackerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMissionTrackerList* MissionTrackerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestTrackerList* MainQuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestTrackerList* PinnedQuestsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AdditionalEntriesIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* DebugHeightEstimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnforceHeightLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMainQuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePinnedQuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibleMissionCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSizeEstimateNeedsRefresh;
    
public:
    UFortMissionTracker();
    UFUNCTION(BlueprintCallable)
    void SetEnablePinnedQuestList(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMainQuestList(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshSizeEstimate();
    
    UFUNCTION(BlueprintCallable)
    void HandleSizeEstimateChanged(UObject* ChangedElement);
    
    UFUNCTION(BlueprintCallable)
    void HandleDebugHUDObjectiveHeightChanged(bool bIsDebugging);
    
    
    // Fix for true pure virtual functions not being implemented
};

