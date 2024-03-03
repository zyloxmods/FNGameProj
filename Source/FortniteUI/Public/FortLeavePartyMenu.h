#pragma once
#include "CoreMinimal.h"
#include "SocialActionMenu.h"
#include "FortLeavePartyMenu.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLeavePartyMenu : public USocialActionMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Decline;
    
public:
    UFortLeavePartyMenu();
};

