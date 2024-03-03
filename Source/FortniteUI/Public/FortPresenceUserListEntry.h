#pragma once
#include "CoreMinimal.h"
#include "FortSocialListUserEntryBase.h"
#include "FortPresenceUserListEntry.generated.h"

class UBorder;
class UFortSocialAvatarIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPresenceUserListEntry : public UFortSocialListUserEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* Avatar_MemberIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_OnlineStatusIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_Highlight;
    
public:
    UFortPresenceUserListEntry();
};

