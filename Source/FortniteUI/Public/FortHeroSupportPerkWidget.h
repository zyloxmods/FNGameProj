#pragma once
#include "CoreMinimal.h"
#include "EFortSupportBonusType.h"
#include "Blueprint/UserWidget.h"
#include "EFortSupportPerkWidgetState.h"
#include "FortHeroSupportPerkWidget.generated.h"

class UCommonTextBlock;
class UFortHero;
class UFortMultiSizeImage;

UCLASS(Blueprintable, EditInlineNew)
class UFortHeroSupportPerkWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortHero> HeroToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortSupportBonusType SupportTypeToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortSupportPerkWidgetState SupportPerkWidgetState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeImage* PerkImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* DescriptionText;
    
public:
    UFortHeroSupportPerkWidget();
    UFUNCTION(BlueprintCallable)
    void SetSupportTypeToRepresent(const EFortSupportBonusType InSupportTypeToRepresent);
    
    UFUNCTION(BlueprintCallable)
    void SetState(const EFortSupportPerkWidgetState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetHeroToRepresent(const UFortHero* InHeroToRepresent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSupportTypeUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeroUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkInCorrectSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkHighlighted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeroInSupportSlot() const;
    
};

