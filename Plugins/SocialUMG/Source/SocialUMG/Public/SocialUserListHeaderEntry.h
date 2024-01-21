#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "SocialUserListHeaderEntry.generated.h"

class USocialUserListHeader;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialUserListHeaderEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialUserListHeader* ListHeader;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ListName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_NumEntries;
    
public:
    USocialUserListHeaderEntry();
    
    // Fix for true pure virtual functions not being implemented
};

