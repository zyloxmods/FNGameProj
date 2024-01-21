#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortHighlightWidget.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortHighlightWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableHighlightNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
public:
    UFortHighlightWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowNotification(bool bShowNotification);
    
};

