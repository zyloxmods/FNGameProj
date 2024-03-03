#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Engine/DataTable.h"
#include "Blueprint/IUserListEntry.h"
#include "FortPostGameMenuEntry.generated.h"

class UFortPostGameMenuEntryOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPostGameMenuEntry : public UCommonButton, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle HoldInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPostGameMenuEntryOverlay* Overlay_Entry;
    
public:
    UFortPostGameMenuEntry();
    
    // Fix for true pure virtual functions not being implemented
};

