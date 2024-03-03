#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortRootViewportLayout.h"
#include "Templates/SubclassOf.h"
#include "FortRootViewportLayout_Athena.generated.h"

class UFortWebPurchaseScreen;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortRootViewportLayout_Athena : public UFortRootViewportLayout {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortWebPurchaseScreen> WebPurchaseScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWebPurchaseScreen* WebPurchaseWidget_RuntimeSpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LetoToggleDormancyAction;
    
public:
    UFortRootViewportLayout_Athena();
protected:
    UFUNCTION(BlueprintCallable)
    void PurchasingWidgetDisplayCallback(UWidget* WebWidget, const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void PurchasingWidgetDismissedCallback();
    
};

