#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "FortConversationOptionsPanel.generated.h"

class UPanelSlot;
class UWidget;

UCLASS(Blueprintable)
class UFortConversationOptionsPanel : public UPanelWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRows;
    
public:
    UFortConversationOptionsPanel();
    UFUNCTION(BlueprintCallable)
    UPanelSlot* AddChildToDynamicPanel(UWidget* Content);
    
};

