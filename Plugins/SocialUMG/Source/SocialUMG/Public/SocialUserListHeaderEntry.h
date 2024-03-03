#pragma once
#include "CoreMinimal.h"
#include "SocialListEntryBase.h"
#include "SocialUserListHeaderEntry.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialUserListHeaderEntry : public USocialListEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ListName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_NumEntries;
    
public:
    USocialUserListHeaderEntry();
};

