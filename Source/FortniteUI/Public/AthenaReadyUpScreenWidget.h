#pragma once
#include "CoreMinimal.h"
#include "FortPostGameScreen.h"
#include "AthenaReadyUpScreenWidget.generated.h"

class UAthenaReadyUpScreenOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReadyUpScreenWidget : public UFortPostGameScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaReadyUpScreenOverlay* ReadyUpOverlay;
    
public:
    UAthenaReadyUpScreenWidget();
};

