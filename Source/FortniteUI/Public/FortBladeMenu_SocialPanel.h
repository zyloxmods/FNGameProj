#pragma once
#include "CoreMinimal.h"
#include "FortBladeMenu.h"
#include "FortBladeMenu_SocialPanel.generated.h"

class UFortSocialPanelView_UserLists;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBladeMenu_SocialPanel : public UFortBladeMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialPanelView_UserLists* SocialPanel_UserLists;
    
public:
    UFortBladeMenu_SocialPanel();
};

