#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortExpeditionExpiresWidget.generated.h"

class UFortExpeditionItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionExpiresWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortExpeditionItem> Item;
    
public:
    UFortExpeditionExpiresWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(UFortExpeditionItem* InItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExpeditionExpirationUpdated();
    
};

