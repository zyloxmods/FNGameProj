#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortSquadManagementScreenBase.h"
#include "FortHeroSquadManagementScreen.generated.h"

class UFortCharacter;
class UFortHeroSquadBonusPerksWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ManageDefendersInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHeroSquadBonusPerksWidgetBase* BonusPerksWidget;
    
public:
    UFortHeroSquadManagementScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFeedbackForSlottingPerson(UFortCharacter* Character, int32 SlotIndex);
    
};

