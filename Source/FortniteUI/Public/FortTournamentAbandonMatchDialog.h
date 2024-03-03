#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortTournamentAbandonMatchDialog.generated.h"

class UCommonButton;
class UCommonDateTimeTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTournamentAbandonMatchDialog : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_LeaveMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ContinueMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonDateTimeTextBlock* Text_LeaveMatchTime;
    
public:
    UFortTournamentAbandonMatchDialog();
};

