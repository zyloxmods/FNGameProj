#pragma once
#include "CoreMinimal.h"
#include "HomebaseSquad.h"
#include "FortSquadStatDetailsWidget.h"
#include "Templates/SubclassOf.h"
#include "FortSurvivorSquadStatMatchesBase.generated.h"

class UFortSurvivorSquadStatMatchBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSurvivorSquadStatMatchBase> StatMatchClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSummaryView;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortSurvivorSquadStatMatchBase*> StatMatches;
    
public:
    UFortSurvivorSquadStatMatchesBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData) const;
    
    UFUNCTION(BlueprintCallable)
    void SetSummaryView(bool bInSummaryView);
    
    UFUNCTION(BlueprintCallable)
    void SetIdOfSquadToManageBP(const FName SquadId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentSquadSetBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIdOfSquadToManageBP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddStatMatch(UFortSurvivorSquadStatMatchBase* SetBonus);
    
};

