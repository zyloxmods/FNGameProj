#pragma once
#include "CoreMinimal.h"
#include "BacchusButton.h"
#include "BacchusAvailablePickupButton.generated.h"

class UCommonRichTextBlock;
class UFortLazyImage;
class UFortMultiSizeItemCard;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UBacchusAvailablePickupButton : public UBacchusButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* ItemCard_BackgroundGradient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_AmmoIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Quantity_Text;
    
public:
    UBacchusAvailablePickupButton();
};

