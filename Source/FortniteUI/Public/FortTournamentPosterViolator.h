#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EEventTimeState.h"
#include "FortTournamentPosterViolator.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTournamentPosterViolator : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TimeRemaining;
    
public:
    UFortTournamentPosterViolator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViolatorStateRefreshed(EEventTimeState NewTimeState);
    
};

