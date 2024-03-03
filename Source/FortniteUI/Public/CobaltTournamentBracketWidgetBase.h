#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetBase.h"
#include "CobaltTournamentBracketWidgetBase.generated.h"

class UCobaltTournamentBracketNodeWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class UCobaltTournamentBracketWidgetBase : public UCobaltWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCobaltTournamentBracketNodeWidgetBase*> LocalTeamNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCobaltTournamentBracketNodeWidgetBase*> EnemyTeamNodes;
    
public:
    UCobaltTournamentBracketWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTournamentBracket_BP(int32 CurrentActiveRound);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateTournamentBracket(int32 CurrentActiveRound);
    
};

