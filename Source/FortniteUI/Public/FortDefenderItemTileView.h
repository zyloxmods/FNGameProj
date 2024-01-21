#pragma once
#include "CoreMinimal.h"
#include "FortItemTileView.h"
#include "FortDefenderItemTileView.generated.h"

class UFortDefenderConfigPanel;

UCLASS(Blueprintable)
class UFortDefenderItemTileView : public UFortItemTileView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortDefenderConfigPanel> DefenderConfigPanel;
    
public:
    UFortDefenderItemTileView();
};

