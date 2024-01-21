#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortLoginStatus.generated.h"

class UCommonButton;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLoginStatus : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Status;
    
public:
    UFortLoginStatus();
    UFUNCTION(BlueprintCallable)
    void SetTitleText(const FText& TitleText);
    
    UFUNCTION(BlueprintCallable)
    void SetLoginStatus(const FText& InLoginStatus);
    
};

