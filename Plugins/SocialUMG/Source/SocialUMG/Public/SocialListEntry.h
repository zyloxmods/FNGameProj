#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "SocialListEntry.generated.h"

class UCommonRichTextBlock;
class UMenuAnchor;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialListEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_RichPresence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* MenuAnchor_Actions;
    
public:
    USocialListEntry();
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* HandleGetMenuContent();
    
    
    // Fix for true pure virtual functions not being implemented
};

