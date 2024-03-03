#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "ERichTextInlineIconDisplayMode.h"
#include "Templates/SubclassOf.h"
#include "CommonRichTextBlock.generated.h"

class UCommonTextScrollStyle;
class UCommonTextStyle;

UCLASS(Blueprintable)
class COMMONUI_API UCommonRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERichTextInlineIconDisplayMode InlineIconDisplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTintInlineIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> DefaultTextStyleOverrideClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileTextBlockScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextScrollStyle> ScrollStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayAllCaps;
    
public:
    UCommonRichTextBlock();
};

