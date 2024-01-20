#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EFortCollectionBookPopupButtonType.h"
#include "FortCollectionBookSlotButton.generated.h"

class UFortCollectionBookSlotWidget;
class UMenuAnchor;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookSlotButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookSlotWidget* CollectionBookSlotWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* PopupMenuAnchor;
    
public:
    UFortCollectionBookSlotButton();
    UFUNCTION(BlueprintCallable)
    void PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSlottedItemUpdated();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetPopupMenu();
    
};

