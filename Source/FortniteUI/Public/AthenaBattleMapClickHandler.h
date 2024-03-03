#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaBattleMapClickHandler.generated.h"

class ABattleMapPawnLive;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaBattleMapClickHandler : public UUserWidget {
    GENERATED_BODY()
public:
    UAthenaBattleMapClickHandler();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleToggledBattleMapLive(ABattleMapPawnLive* BattleMapPawn);
    
};

