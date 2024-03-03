#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HUDLayoutToolV2_LinkAcrossActionPanel.generated.h"

class UCommonHierarchicalScrollBox;
class UCommonTextBlock;
class UFortDynamicEntryBox;
class UHUDLayoutToolV2_Button;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_LinkAcrossActionPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MainContextTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_VehicleContextTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_SelectAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_DeselectAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonHierarchicalScrollBox* ScrollBox_Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_MainContextActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_VehicleContextActions;
    
public:
    UHUDLayoutToolV2_LinkAcrossActionPanel();
};

