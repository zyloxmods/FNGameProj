#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortExpeditionReturnsWidget.generated.h"

class UFortExpeditionItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionReturnsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortExpeditionItem> Item;
    
public:
    UFortExpeditionReturnsWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(UFortExpeditionItem* InItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExpeditionInProgressUpdated();
    
};

