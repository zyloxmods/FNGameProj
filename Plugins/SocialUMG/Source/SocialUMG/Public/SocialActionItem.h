#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SocialActionItem.generated.h"

class USocialUser;

UCLASS(Blueprintable)
class SOCIALUMG_API USocialActionItem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialUser* CurrentUser;
    
public:
    USocialActionItem();
};

