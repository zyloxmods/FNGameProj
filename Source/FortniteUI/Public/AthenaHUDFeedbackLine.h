#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaHUDFeedbackLine.generated.h"

class UCommonRichTextBlock;
class UFortKeybindWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaHUDFeedbackLine : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* Keybind_Feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Feedback;
    
public:
    UAthenaHUDFeedbackLine();
};

