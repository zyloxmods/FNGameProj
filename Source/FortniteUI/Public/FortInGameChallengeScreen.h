#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortInGameChallengeScreen.generated.h"

class UAthenaChallengeTreeView;

UCLASS(Blueprintable, EditInlineNew)
class UFortInGameChallengeScreen : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeTreeView* TreeView_Challenges;
    
public:
    UFortInGameChallengeScreen();
};

