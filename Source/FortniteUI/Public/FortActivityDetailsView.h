#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivityView.h"
#include "FortActivityDetailsView.generated.h"

class UCommonActionWidget;
class UCommonButton;
class UCommonButtonGroup;
class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UDynamicEntryBox;
class UFortActivityDetailsInfoPanel;
class UFortActivityDetailsKnobsPanel;
class UFortActivityDetailsPlayPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityDetailsView : public UFortActivityView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextTabInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrevTabInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActivityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActivityDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* InputActionWidget_NextPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* InputActionWidget_PrevPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_PanelTabButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup_PanelTabButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_ActivityDetailsPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityDetailsPlayPanel* DetailsPanel_Play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityDetailsInfoPanel* DetailsPanel_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityDetailsKnobsPanel* DetailsPanel_Knobs;
    
public:
    UFortActivityDetailsView();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePrevPanelInput(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandlePanelSelectionChanged(UCommonButton* SelectedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleNextPanelInput(bool& bPassThrough);
    
};

