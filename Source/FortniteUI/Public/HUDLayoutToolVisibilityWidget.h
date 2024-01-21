#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EBacchusHUDStateType.h"
#include "HUDLayoutToolVisibilityWidget.generated.h"

class UCommonButton;
class UHUDLayoutToolPlacementWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolVisibilityWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* CombatVisibilityButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* BuildVisibilityButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* EditVisibilityButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* CreativeVisibilityButton;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHUDLayoutToolPlacementWidget> CurrentWidget;
    
public:
    UHUDLayoutToolVisibilityWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Refresh();
    
    UFUNCTION(BlueprintCallable)
    void OnWidgetSelected(UHUDLayoutToolPlacementWidget* NewlySelectedWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnEditClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCreativeClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnBuildClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVisibilities(EBacchusHUDStateType& CombatVisibility, EBacchusHUDStateType& BuildVisibility, EBacchusHUDStateType& EditVisibility, EBacchusHUDStateType& CreativeVisibility) const;
    
};

