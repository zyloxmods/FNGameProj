#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortEulaTab.generated.h"

class UFortRichTextBlockLegacy;
class UImage;
class UScrollBox;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEulaTab : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EULAKeyToShow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRichTextBlockLegacy* Text_EULA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_TextSpinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_EULAText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Spinner;
    
public:
    UFortEulaTab();
private:
    UFUNCTION(BlueprintCallable)
    void HandleDownloadEULAComplete(bool bSuccessful, FText EULAText, const FString& Key);
    
};

