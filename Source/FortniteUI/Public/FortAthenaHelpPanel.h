#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortAthenaHelpPanel.generated.h"

class UCommonTreeView;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaHelpPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTreeView* TreeView_Help;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_HelpEntry;
    
public:
    UFortAthenaHelpPanel();
};

