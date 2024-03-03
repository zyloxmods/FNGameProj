#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Templates/SubclassOf.h"
#include "SocialGroupListEntry.generated.h"

class UMenuAnchor;
class USocialActionMenu;
class USocialGroupChannel;
class UTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialGroupListEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialActionMenu> ActionMenuClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialGroupChannel* SocialGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* MenuAnchor_Actions;
    
public:
    USocialGroupListEntry();
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* HandleGetMenuContent();
    
    
    // Fix for true pure virtual functions not being implemented
};

