#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "SocialGroupListEntry.generated.h"

class UMenuAnchor;
//class USocialGroupChannel;
class UTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialGroupListEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
   // USocialGroupChannel* SocialGroup; Didnt exist on s7
    
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

