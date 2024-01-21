#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortPerksWidgetState.h"
#include "FortUIPerk.h"
#include "FortUIPerkTier.h"
#include "Templates/SubclassOf.h"
#include "FortPerksWidget_NUI.generated.h"

class UCommonLoadGuard;
class UFortHero;
class UFortPerkTierWidget_NUI;
class UFortPerkWidget_NUI;
class UFortTooltipContext;

UCLASS(Blueprintable, EditInlineNew)
class UFortPerksWidget_NUI : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHero* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPerksWidgetState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHero* EvolutionOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPerkTierWidget_NUI> PerkTierWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPerkWidget_NUI> PerkWidgetType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTooltipContext* TooltipContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* PerksListLoadGuard;
    
public:
    UFortPerksWidget_NUI();
    UFUNCTION(BlueprintCallable)
    void SetState(EFortPerksWidgetState InState, UFortHero* InEvolutionOption);
    
    UFUNCTION(BlueprintCallable)
    void SetHero(UFortHero* InHero);
    
    UFUNCTION(BlueprintCallable)
    void ProcessPerkTiers();
    
    UFUNCTION(BlueprintCallable)
    void ProcessPerks();
    
    UFUNCTION(BlueprintCallable)
    void ProcessActiveAbilityPerksAsync();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeroChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGeneratePerkTier(FFortUIPerkTier FortPerkTier, UFortPerkTierWidget_NUI* PerkTierWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGeneratePerk(FFortUIPerk FortPerk, UFortPerkWidget_NUI* PerkWidget);
    
};

