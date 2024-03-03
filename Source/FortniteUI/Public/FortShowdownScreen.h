#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortShowdownScreen.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonTextBlock;
class UFortPersistentLeaderboardScreen;
class UFortShowdownTournamentTile;
class UFortTournamentModal;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortShowdownScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle HypeLeaderboardActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPersistentLeaderboardScreen> HypeLeaderboardScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortShowdownTournamentTile> TileItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTournamentModal> TournamentModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* TournamentTileGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_TournamentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CommonTextBlock_RegionText;
    
public:
    UFortShowdownScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectedTournamentChanged(const FString& SelectedTournament);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectedFrontTournament(bool bFrontIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectedEndTournament(bool bEndIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void NavigateTournamentRight();
    
    UFUNCTION(BlueprintCallable)
    void NavigateTournamentLeft();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSelectedTileChanged(UCommonButton* Button, int32 ButtonIndex);
    
};

