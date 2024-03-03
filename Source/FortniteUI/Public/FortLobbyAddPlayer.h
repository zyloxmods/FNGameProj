#pragma once
#include "CoreMinimal.h"
#include "FortTeamMemberEntryBase.h"
#include "FortLobbyAddPlayer.generated.h"

class UCommonButton;
class UFortPartySuggestionButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLobbyAddPlayer : public UFortTeamMemberEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_EmptySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPartySuggestionButton* PartySuggestion;
    
public:
    UFortLobbyAddPlayer();
};

