#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortShowdownTournamentTile.generated.h"

class UFortShowdownDetailView;
class UFortTournamentPosterViolator;

UCLASS(Blueprintable, EditInlineNew)
class UFortShowdownTournamentTile : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTournamentPosterViolator* ShowdownDetailView_Violator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortShowdownDetailView* ShowdownDetailView_Poster;
    
public:
    UFortShowdownTournamentTile();
    UFUNCTION(BlueprintCallable)
    FString GetTileTournament();
    
};

