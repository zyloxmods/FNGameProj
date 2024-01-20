#pragma once
#include "CoreMinimal.h"
#include "FortTeamMemberEntryBase.h"
#include "Templates/SubclassOf.h"
#include "FortLobbyAddPlayer.generated.h"

class UCommonButton;
class UFortPartySuggestionButton;
class UFortSocialPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLobbyAddPlayer : public UFortTeamMemberEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSocialPanel> SocialPanelClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_EmptySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPartySuggestionButton* PartySuggestion;
    
public:
    UFortLobbyAddPlayer();
};

