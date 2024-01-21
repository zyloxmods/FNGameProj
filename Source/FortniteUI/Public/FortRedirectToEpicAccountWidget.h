#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "EFortLoginAccountType.h"
#include "PlatformSupportDesc.h"
#include "FortRedirectToEpicAccountWidget.generated.h"

class UCommonButton;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRedirectToEpicAccountWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlatformSupportDesc> SupportedPlatforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformSupportDesc DefaultValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CreateAccount;
    
public:
    UFortRedirectToEpicAccountWidget();
    UFUNCTION(BlueprintCallable)
    void SetLoginType(EFortLoginAccountType LoginType);
    
};

