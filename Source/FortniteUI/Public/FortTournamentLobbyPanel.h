#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortShowdownDetailView.h"
#include "Templates/SubclassOf.h"
#include "FortTournamentLobbyPanel.generated.h"

class UCommonButton;
class UFortTournamentModal;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTournamentLobbyPanel : public UFortShowdownDetailView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle EventDetailsAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_EventDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTournamentModal> TournamentModalClass;
    
public:
    UFortTournamentLobbyPanel();
};

