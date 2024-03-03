#pragma once
#include "CoreMinimal.h"
#include "CommonPopupMenu.h"
#include "Templates/SubclassOf.h"
#include "FortControllerActionsMenu.generated.h"

class UDynamicEntryBox;
class UFortControllerActionsMenuEntry;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortControllerActionsMenu : public UCommonPopupMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortControllerActionsMenuEntry> MenuEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_BindableActions;
    
public:
    UFortControllerActionsMenu();
};

