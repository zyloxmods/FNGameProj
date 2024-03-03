#pragma once
#include "CoreMinimal.h"
#include "FortActorIndicatorWidget.h"
#include "FortChallengeData.h"
#include "FortConversationScreen.generated.h"

class UFortConversationOption;
class UFortConversationOptionsPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortConversationScreen : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeData> DebugChallengeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortConversationOption> DialogChoiceSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortConversationOptionsPanel* DynamicPanel_DailogOptions;
    
public:
    UFortConversationScreen();
};

