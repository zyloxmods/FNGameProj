#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaEndGamePlacementWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaEndGamePlacementWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaEndGamePlacementWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlacement(int32 NewPlacement);
    
public:
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

