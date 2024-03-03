#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortTabButtonInterface.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTopBarTabButton.generated.h"

class UCommonTextBlock;
class UFortBangWrapper_NUI;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTopBarTabButton : public UCommonButton, public IFortTabButtonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBangWrapper_NUI* BangWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_MobileIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisplayName;
    
public:
    UFortTopBarTabButton();
    UFUNCTION(BlueprintCallable)
    void SetTabLabelInfo_Implementation(const FFortTabButtonLabelInfo& TabLabelInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUseAlternateTab();
    
    
    // Fix for true pure virtual functions not being implemented
};

