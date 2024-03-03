#pragma once
#include "CoreMinimal.h"
#include "CommonRichTextBlock.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "FortRichTextBlockKeybind.generated.h"

class UFortKeybindWidget;

UCLASS(Blueprintable)
class UFortRichTextBlockKeybind : public UCommonRichTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortKeybindWidget> KeybindWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DesiredKeybindWidgetSize;
    
public:
    UFortRichTextBlockKeybind();
};

