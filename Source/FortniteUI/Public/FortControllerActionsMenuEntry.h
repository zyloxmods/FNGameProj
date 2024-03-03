#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortControllerActionsMenuEntry.generated.h"

class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortControllerActionsMenuEntry : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_Action;
    
public:
    UFortControllerActionsMenuEntry();
};

