#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BacchusHUDElement.h"
#include "BacchusPluginContentWidget.generated.h"

class UOverlay;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UBacchusPluginContentWidget : public UBacchusHUDElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PluginContentTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MyOverlay;
    
public:
    UBacchusPluginContentWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnPluginHUDWidgetRemoved(FGameplayTag WidgetTag);
    
    UFUNCTION(BlueprintCallable)
    void OnPluginHUDWidgetAdded(FGameplayTag WidgetTag, TSoftClassPtr<UWidget> SoftWidgetClass);
    
};

