#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortPlayerProfileBannerEditorTile.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerProfileBannerEditorTile : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> Item;
    
public:
    UFortPlayerProfileBannerEditorTile();
    
    // Fix for true pure virtual functions not being implemented
};

