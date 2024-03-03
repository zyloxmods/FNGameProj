#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortPostGameMenuEntryOverlay.generated.h"

class UCommonActionWidget;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPostGameMenuEntryOverlay : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* InputAction_Select;
    
public:
    UFortPostGameMenuEntryOverlay();
};

