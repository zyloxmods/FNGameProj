#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Styling/SlateBrush.h"
#include "FortProgressWidget.generated.h"

class UCommonTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortProgressWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_MainIcon;
    
public:
    UFortProgressWidget();
    UFUNCTION(BlueprintCallable)
    void SetTitle(FText Title);
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(FSlateBrush IconBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetDescription(FText Description);
    
};

