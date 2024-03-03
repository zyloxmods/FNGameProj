#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortExpeditionPickVehicleWidget.generated.h"

class UFortExpeditionItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortExpeditionItem> Item;
    
public:
    UFortExpeditionPickVehicleWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(UFortExpeditionItem* InItem);
    
};

