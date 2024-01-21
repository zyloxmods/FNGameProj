#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortMtxStoreSelectionPopup.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMtxStoreSelectionPopup : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Epic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Samsung;
    
public:
    UFortMtxStoreSelectionPopup();
};

