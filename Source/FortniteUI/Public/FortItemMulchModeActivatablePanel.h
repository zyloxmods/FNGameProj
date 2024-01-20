#pragma once
#include "CoreMinimal.h"
#include "FortItemDetailsActivatablePanel.h"
#include "FortItemMulchModeActivatablePanel.generated.h"

class UFortItemManagementItemDetailsPanel;
class UFortItemManagementMulchDetailsPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemMulchModeActivatablePanel : public UFortItemDetailsActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemManagementItemDetailsPanel* MulchModeItemDetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemManagementMulchDetailsPanel* MulchDetailsPanel;
    
    UFortItemMulchModeActivatablePanel();
};

