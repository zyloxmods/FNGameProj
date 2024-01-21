#pragma once
#include "CoreMinimal.h"
#include "MobileHUDVisual.h"
#include "MobileHUDButtonVisual.generated.h"

class UImage;
class UPaperSprite;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UMobileHUDButtonVisual : public UMobileHUDVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonDisplayScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* DefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* OuterSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* InnerSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Icon;
    
public:
    UMobileHUDButtonVisual();
    UFUNCTION(BlueprintCallable)
    void SetButtonSprite(UPaperSprite* NewSprite);
    
};

