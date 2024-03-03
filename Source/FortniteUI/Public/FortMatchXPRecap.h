#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortMatchXPRecap.generated.h"

class UAthenaMiniChallenges;
class UEndOfMatchQuestUpdateWidget;
class UFortMatchXPTotalEntry;
class UFortPostGameMenuListView;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchXPRecap : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPostGameMenuListView* ListView_PostGameMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchXP_MedalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchXP_SurvivalBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchXP_CombatBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchXP_MatchXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchXP_TotalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndOfMatchQuestUpdateWidget* Widget_QuestRecap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMiniChallenges* MiniChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Leto_IGMMWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_ChallengeSection;
    
public:
    UFortMatchXPRecap();
    UFUNCTION(BlueprintCallable)
    void FocusOnDesiredTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimateXPTotals();
    
};

