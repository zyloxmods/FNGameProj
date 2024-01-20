#pragma once
#include "CoreMinimal.h"
#include "FortItemDetailsActivatablePanel.h"
#include "FortItemCompareModeActivatablePanel.generated.h"

class UFortItemManagementItemDetailsPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemCompareModeActivatablePanel : public UFortItemDetailsActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemManagementItemDetailsPanel* ComparisonModeLeftItemDetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemManagementItemDetailsPanel* ComparisonModeRightItemDetailsPanel;
    
    UFortItemCompareModeActivatablePanel();
};

