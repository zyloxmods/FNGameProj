#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaEventMatchSquadWidgetBase.h"
#include "AthenaEventMatchScoreboardSquadWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventMatchScoreboardSquadWidget : public UAthenaEventMatchSquadWidgetBase, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UAthenaEventMatchScoreboardSquadWidget();
    
    // Fix for true pure virtual functions not being implemented
};

