#pragma once
#include "CoreMinimal.h"
#include "FortSquadStatDetailsWidget.h"
#include "FortHeroSquadBonusPerksWidgetBase.generated.h"

class UFortPerkWidget_NUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPerkWidget_NUI* SupportBonusPerkWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPerkWidget_NUI* TacticalBonusPerkWidget;
    
public:
    UFortHeroSquadBonusPerksWidgetBase();
};

