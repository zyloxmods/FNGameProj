#pragma once
#include "CoreMinimal.h"
#include "FortActivityDetailsPanel.h"
#include "FortActivityDetailsKnobsPanel.generated.h"

class UFortMatchmakingKnobsModal;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityDetailsKnobsPanel : public UFortActivityDetailsPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchmakingKnobsModal* Temporary_KnobsModal;
    
public:
    UFortActivityDetailsKnobsPanel();
};

