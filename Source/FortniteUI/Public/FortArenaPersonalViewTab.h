#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortArenaPersonalViewTab.generated.h"

class UFortArenaPersonalDivisionView;

UCLASS(Blueprintable, EditInlineNew)
class UFortArenaPersonalViewTab : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortArenaPersonalDivisionView* EventView_PersonalHype;
    
public:
    UFortArenaPersonalViewTab();
};

