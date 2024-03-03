#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "AthenaVariantFilterTabInfo.h"
#include "FortVariantFilterTab.generated.h"

class UCommonTextBlock;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortVariantFilterTab : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAthenaVariantFilterTabInfo TabInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_Label;
    
public:
    UFortVariantFilterTab();
};

