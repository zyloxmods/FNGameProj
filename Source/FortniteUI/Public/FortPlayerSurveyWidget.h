#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortPlayerSurveyWidget.generated.h"

class UFortPlayerSurveyDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UFortPlayerSurveyWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyDefinition* Definition;
    
public:
    UFortPlayerSurveyWidget();
};

