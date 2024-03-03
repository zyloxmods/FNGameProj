#pragma once
#include "CoreMinimal.h"
#include "AthenaPlayerInfoBaseWidgetInterface.h"
#include "LimitedLivesCounterWidget.h"
#include "TeamLimitedLivesCounterWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UTeamLimitedLivesCounterWidget : public ULimitedLivesCounterWidget, public IAthenaPlayerInfoBaseWidgetInterface {
    GENERATED_BODY()
public:
    UTeamLimitedLivesCounterWidget();
    
    // Fix for true pure virtual functions not being implemented
};

