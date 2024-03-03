#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "ArsenicWidgetBase.generated.h"

class AFortAthenaMutator_Arsenic;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class UArsenicWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UArsenicWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerTeamRevealed(AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerTeamChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerTeamRevealedOrChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnArsenicMutatorAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaMutator_Arsenic* GetArsenicMutator() const;
    
};

