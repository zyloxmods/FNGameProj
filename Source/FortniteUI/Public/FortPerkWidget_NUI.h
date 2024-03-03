#pragma once
#include "CoreMinimal.h"
#include "CommonPoolableWidgetInterface.h"
#include "CommonUserWidget.h"
#include "EFortItemTier.h"
#include "EFortSupportBonusType.h"
#include "Styling/SlateBrush.h"
#include "FortUIPerk.h"
#include "FortPerkWidget_NUI.generated.h"

class UFortTooltipContext;
class UFortTooltipLoadingWrapper;

UCLASS(Blueprintable, EditInlineNew)
class UFortPerkWidget_NUI : public UCommonUserWidget, public ICommonPoolableWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUIPerk Perk;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTooltipContext* CachedTooltipContext;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseSummaryTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTooltipLoadingWrapper* CachedTooltipLoadingWrapper;
    
public:
    UFortPerkWidget_NUI();
    UFUNCTION(BlueprintCallable)
    void SetTooltipContext(const UFortTooltipContext* InTooltipContext);
    
    UFUNCTION(BlueprintCallable)
    void RequestTooltipDescription();
    
    UFUNCTION(BlueprintCallable)
    void RequestCombinedTooltipDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTooltipDescriptionReady(const TArray<FText>& DescriptionList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerkUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombinedTooltipDescriptionReady(const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTierPerk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkHighlighted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAbility() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleAbilityKitTooltipLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTooltipTitle() const;
    
    UFUNCTION(BlueprintCallable)
    UFortTooltipContext* GetTooltipContext();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortSupportBonusType GetSupportBonusType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemTier GetPerkTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIcon(FSlateBrush& Brush) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

