#pragma once
#include "CoreMinimal.h"
#include "SocialListEntryBase.h"
#include "Templates/SubclassOf.h"
#include "SocialListInteractableEntryBase.generated.h"

class UMenuAnchor;
class USocialActionMenu;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialListInteractableEntryBase : public USocialListEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialActionMenu> ActionMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* MenuAnchor_Actions;
    
public:
    USocialListInteractableEntryBase();
private:
    UFUNCTION(BlueprintCallable)
    void HandleMenuOpenChanged(bool bIsMenuOpen);
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* HandleGetMenuContent();
    
};

