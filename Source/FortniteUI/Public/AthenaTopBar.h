#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "EFortUIFeature.h"
#include "FortTopBarTabButtonInfo.h"
#include "AthenaTopBar.generated.h"

class UCommonActionWidget;
class UCommonButton;
class UCommonButtonGroup;
class UCommonLazyImage;
class UCommonTextBlock;
class UDynamicEntryBox;
class UEmergencyNoticeBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaTopBar : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextTabInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousTabInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTopBarTabButtonInfo> TabsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup_TopTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmergencyNoticeBase* Notice_Emergency_Base;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Social;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MTX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MobileTabLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_TabButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* InputActionWidget_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* InputActionWidget_Prev;
    
public:
    UAthenaTopBar();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMobileTabLabelChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleFeatureNavigateRequest(EFortUIFeature Feature);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonGroupSelectionChanged(UCommonButton* SelectedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleActiveSeasonDataChanged(const TArray<FString>& ActiveEventFlags);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddIconToScreen(UCommonLazyImage* Image);
    
};

