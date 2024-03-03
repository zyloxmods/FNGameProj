#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortSettingsFilterState.h"
#include "FortSettingsPanel.generated.h"

class UFortSetting;
class UFortSettingDetailView;
class UFortSettingRegistry;
class UFortSettingsListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSettingRegistry* Registry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortSetting*> VisibleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSetting* LastHoveredOrSelectedSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortSettingsFilterState FilterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortSettingsFilterState> FilterNavigationStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSettingsListView* ListView_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSettingDetailView* Details_Settings;
    
  //  UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FOnExecuteNamedActionBP BP_OnExecuteNamedAction;
    
public:
    UFortSettingsPanel();
};

