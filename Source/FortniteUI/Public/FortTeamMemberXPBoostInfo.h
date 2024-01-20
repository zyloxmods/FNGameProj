#pragma once
#include "CoreMinimal.h"
#include "FortTeamMemberEntryBase.h"
#include "FortTeamMemberXPBoostInfo.generated.h"

class UPanelWidget;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTeamMemberXPBoostInfo : public UFortTeamMemberEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_BattlePassOwnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_BattlePassSelfXPBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_EventXPBoost;
    
public:
    UFortTeamMemberXPBoostInfo();
};

