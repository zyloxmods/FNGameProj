#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortHUDObjectiveSizeInterface.h"
#include "OnMissionEntryVisibilityChangedDelegate.h"
#include "OnSizeEstimateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortMissionTrackerEntry.generated.h"

class AFortMission;
class UCommonTextBlock;
class UFortMissionTrackerSubEntry;
class UImage;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMissionTrackerEntry : public UCommonUserWidget, public IFortHUDObjectiveSizeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionEntryVisibilityChanged OnMissionEntryVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMissionTrackerSubEntry> SubEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfigureAsHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenByHeightConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* MissionNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ObjectivesListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UpperSeparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortMission* TrackedMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSizeEstimateChanged OnSizeEstimateChangedDelegate;
    
public:
    UFortMissionTrackerEntry();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionSet();
    
    UFUNCTION(BlueprintCallable)
    void HandleObjectivesChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionInfoSet();
    
    
    // Fix for true pure virtual functions not being implemented
};

