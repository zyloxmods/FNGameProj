#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortHelpTreeItemBase.generated.h"

class UFortHelpItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHelpTreeItemBase : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHelpItem* HelpItem;
    
public:
    UFortHelpTreeItemBase();
    
    // Fix for true pure virtual functions not being implemented
};

