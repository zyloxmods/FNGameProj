#pragma once
#include "CoreMinimal.h"
#include "FortActivityDetailsPanel.h"
#include "FortActivityDetailsPlayPanel.generated.h"

class UFortActivityDetailsSettingsWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityDetailsPlayPanel : public UFortActivityDetailsPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityDetailsSettingsWidget* Setting_MatchmakingFill;
    
public:
    UFortActivityDetailsPlayPanel();
};

