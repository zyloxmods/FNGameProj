#pragma once
#include "CoreMinimal.h"
#include "AthenaEventScreenBase.h"
#include "Templates/SubclassOf.h"
#include "AthenaEventMatchActiveGridScreenBase.generated.h"

class UAthenaEventMatchTeamWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventMatchActiveGridScreenBase : public UAthenaEventScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaEventMatchTeamWidgetBase> TeamWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaEventMatchTeamWidgetBase*> ActiveTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTeamCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTeamSize;
    
public:
    UAthenaEventMatchActiveGridScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamEliminated_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTeamEliminated(int32 InSquadId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamChanged_BP();
    
};

