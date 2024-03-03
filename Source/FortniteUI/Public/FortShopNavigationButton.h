#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortShopNavigationButton.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UFortShopNavigationButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Section;
    
public:
    UFortShopNavigationButton();
};

