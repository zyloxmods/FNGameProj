#pragma once
#include "CoreMinimal.h"
#include "FortLobbyPlayerPanel.h"
#include "AthenaLobbyPlayerPanel.generated.h"

class UCommonButton;
class UFortCosmeticLoadoutSelector;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaLobbyPlayerPanel : public UFortLobbyPlayerPanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Mute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ViewProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_BattlePassTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticLoadoutSelector* LoadoutSelector;
    
public:
    UAthenaLobbyPlayerPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsMutedUpdated(bool bIsMuted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHasBattlePassUpdated(bool bHasBattlePass);
    
};

