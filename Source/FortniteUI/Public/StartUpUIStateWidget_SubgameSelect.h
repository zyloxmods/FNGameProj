#pragma once
#include "CoreMinimal.h"
#include "FortUIStateWidgetBase.h"
#include "StartUpUIStateWidget_SubgameSelect.generated.h"

class UCommonUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStartUpUIStateWidget_SubgameSelect : public UFortUIStateWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* BottomBar;
    
public:
    UStartUpUIStateWidget_SubgameSelect();
};

