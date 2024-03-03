#pragma once
#include "CoreMinimal.h"
#include "SocialListInteractableEntryBase.h"
#include "SocialListUserEntryBase.generated.h"

class UCommonRichTextBlock;
class USocialNameTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialListUserEntryBase : public USocialListInteractableEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USocialNameTextBlock* Text_SocialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_RichPresence;
    
public:
    USocialListUserEntryBase();
};

