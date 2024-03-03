#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaItemShopSelector.generated.h"

class UCommonActivatablePanel;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopSelector : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatablePanel> ItemShopScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatablePanel> CatabaScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatablePanel* ShopScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Container_ShopScreen;
    
public:
    UAthenaItemShopSelector();
};

