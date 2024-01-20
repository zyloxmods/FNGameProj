#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SocialActionItem.h"
#include "FortJoinablePartyItem.generated.h"

class UFortSocialUser;

UCLASS(Blueprintable)
class UFortJoinablePartyItem : public USocialActionItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortSocialUser*> KnownUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FColor InviteUserTintColor;
    
public:
    UFortJoinablePartyItem();
};

