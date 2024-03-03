#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortActivityDetailsPanel.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityDetailsPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PanelName;
    
public:
    UFortActivityDetailsPanel();
};

