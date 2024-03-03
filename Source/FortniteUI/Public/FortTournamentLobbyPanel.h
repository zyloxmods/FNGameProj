#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortShowdownDetailView.h"
#include "Templates/SubclassOf.h"
#include "FortTournamentLobbyPanel.generated.h"

class UCommonButton;
class UCommonTextBlock;
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TimeRemainingScheduledMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ScheduledMatchInfo;
    
public:
    UFortTournamentLobbyPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesScheduledMatchmaking() const;
    
};

