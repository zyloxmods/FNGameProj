#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserListEntry.h"
#include "SocialListEntryBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialListEntryBase : public UCommonButton, public IUserListEntry {
    GENERATED_BODY()
public:
    USocialListEntryBase();
    
    // Fix for true pure virtual functions not being implemented
};

