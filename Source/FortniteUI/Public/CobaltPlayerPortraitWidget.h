#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetBase.h"
#include "CobaltPlayerPortraitWidget.generated.h"

class AFortPlayerState;
class UCommonTextBlock;
class UFortLazyImage;

UCLASS(Blueprintable, EditInlineNew)
class UCobaltPlayerPortraitWidget : public UCobaltWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* AvatarImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PlayerNameTextWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* PlayerState;
    
public:
    UCobaltPlayerPortraitWidget();
};

