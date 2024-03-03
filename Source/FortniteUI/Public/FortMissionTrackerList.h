#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortHUDObjectiveSizeInterface.h"
#include "OnMissionTrackerListVisibilityChangedDelegate.h"
#include "OnSizeEstimateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortMissionTrackerList.generated.h"

class UFortMissionTrackerEntry;
class UObject;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMissionTrackerList : public UCommonUserWidget, public IFortHUDObjectiveSizeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMissionTrackerEntry> MissionEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfigureAsHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* MissionsListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SecondaryMissionsListBox;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionTrackerListVisibilityChanged OnMissionTrackerListVisibilityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibleMissionCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSizeEstimateChanged OnSizeEstimateChangedDelegate;
    
public:
    UFortMissionTrackerList();
    UFUNCTION(BlueprintCallable)
    void UpdateVisibleMissionCategories(int32 InVisibleMissionCategories);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVisibility();
    
    UFUNCTION(BlueprintCallable)
    void HandleSizeEstimateChanged(UObject* ChangedElement);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionsUpdated();
    
    
    // Fix for true pure virtual functions not being implemented
};

