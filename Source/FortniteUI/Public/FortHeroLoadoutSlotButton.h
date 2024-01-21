#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EHeroLoadoutSlotType.h"
#include "FortHeroLoadoutSlotButton.generated.h"

class UFortHeroLoadoutSlotButton;
class UMenuAnchor;

UCLASS(Blueprintable, EditInlineNew)
class UFortHeroLoadoutSlotButton : public UCommonButton {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestChangeHero, UFortHeroLoadoutSlotButton*, SlotButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuOpenChangedEvent, UFortHeroLoadoutSlotButton*, SlotButton, bool, bIsMenuOpen);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeroLoadoutSlotType SlotType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestChangeHero OnRequestChangeHero;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuOpenChangedEvent OnContextMenuOpenChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* ContextMenuAnchor;
    
public:
    UFortHeroLoadoutSlotButton();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContextMenuOpen() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMenuOpenChanged(bool bIsMenuOpen);
    
};

