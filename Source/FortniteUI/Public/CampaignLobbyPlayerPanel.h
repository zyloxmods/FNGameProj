#pragma once
#include "CoreMinimal.h"
#include "FortLobbyPlayerPanel.h"
#include "CampaignLobbyPlayerPanel.generated.h"

class UCommonButton;
class UCommonNumericTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCampaignLobbyPlayerPanel : public UFortLobbyPlayerPanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ShowHeadAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ShowBackpack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* Number_PowerLevel;
    
public:
    UCampaignLobbyPlayerPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowHeadAccessoryChanged(bool bShowHeadAccessory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBackbackChanged(bool bShowBackpack);
    
};

