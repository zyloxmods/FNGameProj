#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "AthenaBroadcastMapPanelBase.generated.h"

class UAthenaMapLayer;
class UAthenaSpectatorMapPlayerListBase;
class UCommonButton;
class UCommonWidgetSwitcher;
class UFortBroadcasterMapSettings;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaBroadcastMapPanelBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpectatorMapPlayerListBase* PlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapLayer* AthenaMapLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* LhsSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CycleSideBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CycleSideBarRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortBroadcasterMapSettings> MapSettingsClass;
    
public:
    UAthenaBroadcastMapPanelBase();
};

