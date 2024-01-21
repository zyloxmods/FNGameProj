#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HUDLayoutToolPropertyPanel.generated.h"

class UCommonTextBlock;
class UHUDLayoutToolPlacementWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolPropertyPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PanelTitle;
    
public:
    UHUDLayoutToolPropertyPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWidgetSelected(UHUDLayoutToolPlacementWidget* NewlySelectedWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnMenuStateChange(bool bNewlyOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClose();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsOpen() const;
    
};

