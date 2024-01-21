#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortMissionTracker.generated.h"

class UCommonNumericTextBlock;
class UFortMissionTrackerList;
class UFortQuestTrackerList;
class UObject;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMissionTracker : public UFortHUDElementWidget {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSizeEstimateNeedsRefresh;
    
public:
    UFortMissionTracker();
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshSizeEstimate();
    
    UFUNCTION(BlueprintCallable)
    void HandleSizeEstimateChanged(UObject* ChangedElement);
    
    UFUNCTION(BlueprintCallable)
    void HandleDebugHUDObjectiveHeightChanged(bool bIsDebugging);
    
};

