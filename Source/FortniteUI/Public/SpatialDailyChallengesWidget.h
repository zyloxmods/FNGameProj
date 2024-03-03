#pragma once
#include "CoreMinimal.h"
#include "AthenaSpatialScreen.h"
#include "SpatialDailyChallengesWidget.generated.h"

class UFortDailyChallengeStickyNoteWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialDailyChallengesWidget : public UAthenaSpatialScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDailyChallengeStickyNoteWidget* StickyNote_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDailyChallengeStickyNoteWidget* StickyNote_Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDailyChallengeStickyNoteWidget* StickyNote_Bottom;
    
public:
    USpatialDailyChallengesWidget();
};

