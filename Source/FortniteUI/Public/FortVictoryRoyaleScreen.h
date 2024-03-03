#pragma once
#include "CoreMinimal.h"
#include "FortPostGameScreen.h"
#include "FortVictoryRoyaleScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortVictoryRoyaleScreen : public UFortPostGameScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenDuration;
    
public:
    UFortVictoryRoyaleScreen();
};

