#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortSelectableAttributeListItem_NUI.generated.h"

class UFortAttributeListItem_NUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSelectableAttributeListItem_NUI : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAttributeListItem_NUI* AttributeListItem;
    
public:
    UFortSelectableAttributeListItem_NUI();
    
    // Fix for true pure virtual functions not being implemented
};

