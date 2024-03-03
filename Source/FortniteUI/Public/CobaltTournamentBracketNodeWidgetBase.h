#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetBase.h"
#include "EBracketNodeState.h"
#include "CobaltTournamentBracketNodeWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCobaltTournamentBracketNodeWidgetBase : public UCobaltWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBracketNodeState CurrentBracketNodeState;
    
public:
    UCobaltTournamentBracketNodeWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleBracketNodeStateSet_BP(EBracketNodeState NewState);
    
};

