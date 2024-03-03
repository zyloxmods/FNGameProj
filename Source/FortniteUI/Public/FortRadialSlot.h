#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortRadialSlot.generated.h"

class UCommonLazyImage;
class UCommonTextBlock;
class UTexture2D;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortRadialSlot : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_EquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> LockedTexture;
    
public:
    UFortRadialSlot();
};

