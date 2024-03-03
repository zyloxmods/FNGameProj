#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "EHomebaseNodeType.h"
#include "FortUpgradeScreenBase.generated.h"

class UCommonLoadGuard;
class UCommonTileView;
class UFortItemDefinition;
class UFortTabListWidgetBase;
class UFortUpgradeDetailsBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortUpgradeScreenBase : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* UpgradesTabSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* UpgradesTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* UpgradeTileViewLoadGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortUpgradeDetailsBase* Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EHomebaseNodeType> TabToNodeTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* UpgradesRespecToken;
    
public:
    UFortUpgradeScreenBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UseUpgradesRespecToken();
    
    UFUNCTION(BlueprintCallable)
    void TogglePreview();
    
    UFUNCTION(BlueprintCallable)
    void RefreshFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUseUpgradesRespecTokenComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgradeInfoChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchaseNodeComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreviewing() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTabSelected(FName TabId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradesRespecTokenCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPreview() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreUpgradesRespecTokensAvailable() const;
    
};

