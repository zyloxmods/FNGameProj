#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "CommonPopupButton.generated.h"

class UCommonPopupMenu;
class UMenuAnchor;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCommonPopupButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* PopupMenuAnchor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPopupMenu* PopupMenu;
    
public:
    UCommonPopupButton();
private:
    UFUNCTION(BlueprintCallable)
    UWidget* GetMenuAnchorWidget();
    
};

