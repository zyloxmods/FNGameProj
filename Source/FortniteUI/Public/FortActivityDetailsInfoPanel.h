#pragma once
#include "CoreMinimal.h"
#include "FortActivityDetailsPanel.h"
#include "FortActivityDetailsInfoPanel.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityDetailsInfoPanel : public UFortActivityDetailsPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActivityInfo;
    
public:
    UFortActivityDetailsInfoPanel();
};

